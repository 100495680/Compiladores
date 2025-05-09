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
    forth_file="$BASE_DIR/${name}.f"
    c_bin="$BASE_DIR/${name}"
    out_gforth="$BASE_DIR/${name}_gforth.out"
    out_clisp="$BASE_DIR/${name}_clisp.out"
    out_c="$BASE_DIR/${name}_c.out"
    txt_file="$BASE_DIR/${name}.txt"

    echo ">>> $name.c"

    # 1) Generar .f (Forth) desde C: trad | back
    echo " 1) trad → back → archivo .f"
    "$BASE_DIR/trad" < "$src" | "$BASE_DIR/back" > "$forth_file"
    echo "    [OK] Generado $forth_file"

    # 2) Ejecutar gforth y salir al terminar
    echo " 2) gforth -q $forth_file -e bye"
    gforth -q "$forth_file" -e bye > "$out_gforth"
    echo "    [gforth] $(head -1 "$out_gforth")…"

    # 3) Solo frontend + clisp
    echo " 3) trad → clisp"
    "$BASE_DIR/trad" < "$src" > "$lisp_file"
    clisp "$lisp_file" > "$out_clisp"
    echo "    [clisp] $(head -1 "$out_clisp")…"

    # 4) Compilación C nativa
    echo " 4) gcc → binario → ejecución"
    gcc "$src" -o "$c_bin"
    "$c_bin" > "$out_c"
    echo "    [C   ] $(head -1 "$out_c")…"

    # 5) Generar archivo .txt con código y salidas
    echo " 5) Generando $txt_file"
    {
        # Código C
        cat "$src"
        echo '---------------------------------------------------'
        # Salida C
        cat "$out_c"
        echo '---------------------------------------------------'
        # Código Lisp
        cat "$lisp_file"
        echo '---------------------------------------------------'
        # Salida Lisp
        cat "$out_clisp"
        echo '---------------------------------------------------'
        # Código Forth
        cat "$forth_file"
        echo '---------------------------------------------------'
        # Salida Forth
        cat "$out_gforth"
    } > "$txt_file"
    echo "    [OK] Generado $txt_file"

    echo "----------------------------------------"
done

echo "=== FIN ==="
