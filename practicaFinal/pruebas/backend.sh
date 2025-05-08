#!/bin/bash
set -euo pipefail

BASE_DIR="$(cd "$(dirname "$0")/.." && pwd)"   # sube un nivel si tu script está en pruebas/
PRUEBAS_DIR="$BASE_DIR/pruebas/pruebasB"

# 1) Compila trad.y
bison -o "$BASE_DIR/trad.tab.c" "$BASE_DIR/trad.y"
gcc -o "$BASE_DIR/trad" "$BASE_DIR/trad.tab.c"

# 2) Compila back.y
bison -o "$BASE_DIR/back.tab.c" "$BASE_DIR/back.y"
gcc -o "$BASE_DIR/back" "$BASE_DIR/back.tab.c"

echo
echo "=== INICIANDO EVALUACIÓN EN $PRUEBAS_DIR ==="
for src in "$PRUEBAS_DIR"/*.c; do
    name="$(basename "$src" .c)"
    lisp_file="$BASE_DIR/${name}.l"
    c_bin="$BASE_DIR/${name}"
    out_gforth="$BASE_DIR/${name}_gforth.out"
    out_clisp="$BASE_DIR/${name}_clisp.out"
    out_c="$BASE_DIR/${name}_c.out"

    echo ">>> $name.c"

    # 1) Pipeline C→Lisp→Forth
    echo " 1) trad | back | gforth"
    "$BASE_DIR/trad" < "$src" | "$BASE_DIR/back" | gforth > "$out_gforth"
    echo "    [gforth] $(head -1 "$out_gforth")…"

    # 2) Solo frontend + clisp
    echo " 2) trad → clisp"
    "$BASE_DIR/trad" < "$src" > "$lisp_file"
    clisp "$lisp_file" > "$out_clisp"
    echo "    [clisp] $(head -1 "$out_clisp")…"

    # 3) Compilación C nativa
    echo " 3) gcc → binario → ejecución"
    gcc "$src" -o "$c_bin"
    "$c_bin" > "$out_c"
    echo "    [C   ] $(head -1 "$out_c")…"

    echo "----------------------------------------"
done

echo "=== FIN ==="
