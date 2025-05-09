#!/bin/bash
set -euo pipefail

# Directorio base (ajusta si hace falta)
BASE_DIR="$(cd "$(dirname "$0")" && pwd)"
PRUEBAS_DIR="$BASE_DIR/pruebasF"

# 1) Compilar trad.y con Bison
echo "Compilando trad.y con bison..."
bison -o "$BASE_DIR/trad.tab.c" "$BASE_DIR/trad.y"

# 2) Compilar trad.tab.c con GCC
echo "Compilando trad.tab.c con gcc..."
gcc "$BASE_DIR/trad.tab.c" -o "$BASE_DIR/trad"

echo
echo "=== INICIANDO PRUEBAS FRONTEND EN $PRUEBAS_DIR ==="
echo

# 3) Para cada .c en pruebasF:
#    - generar .l
#    - compilar y ejecutar el C nativo
#    - interpretar con clisp
#    - volcar todo en un .txt
for src in "$PRUEBAS_DIR"/*.c; do
    name="$(basename "$src" .c)"
    lisp_file="$BASE_DIR/${name}.l"
    c_bin="$BASE_DIR/${name}.out"
    report_file="$BASE_DIR/${name}.txt"

    echo ">>> Procesando $name.c"

    # 3.1) Generar Lisp intermedio
    echo " - Generando Lisp: $lisp_file"
    "$BASE_DIR/trad" < "$src" > "$lisp_file"

    # 3.2) Compilar C nativo
    echo " - Compilando C nativo: $c_bin"
    gcc "$src" -o "$c_bin"

    # 3.3) Generar reporte completo
    echo " - Generando reporte en: $report_file"
    {
        # 1) Código C
        cat "$src"
        echo '---------------------------------------------------'
        # 2) Salida C nativo
        "$c_bin"
        echo '---------------------------------------------------'
        # 3) Código Lisp
        cat "$lisp_file"
        echo '---------------------------------------------------'
        # 4) Salida Lisp (CLISP)
        clisp "$lisp_file"
    } > "$report_file"

    echo " - Contenido de $report_file:"
    cat "$report_file"
    echo "----------------------------------------"
done

echo
echo "=== PRUEBAS FRONTEND COMPLETADAS ==="
