#!/bin/bash
set -e

# Directorio base (ajusta si hace falta)
BASE_DIR="$(cd "$(dirname "$0")" && pwd)"
PRUEBAS_DIR="$BASE_DIR/pruebasF"

# 1. Compilar trad.y con Bison
echo "Compilando trad.y con bison..."
bison -o "$BASE_DIR"/trad.tab.c "$BASE_DIR"/trad.y

# 2. Compilar trad.tab.c con GCC
echo "Compilando trad.tab.c con gcc..."
gcc "$BASE_DIR"/trad.tab.c -o "$BASE_DIR"/trad

echo
echo "=== INICIANDO PRUEBAS FRONTEND EN $PRUEBAS_DIR ==="
echo

# 3. Para cada .c en pruebasF, generar .l, interpretarlo con clisp y guardar todo en un .txt
for src in "$PRUEBAS_DIR"/*.c; do
    name="$(basename "$src" .c)"
    lisp_file="$BASE_DIR"/"$name".l
    output_file="$BASE_DIR"/salida_"$name".txt

    echo ">>> Procesando $name.c"
    echo " - Generando Lisp intermedio: $lisp_file"
    "$BASE_DIR"/trad < "$src" > "$lisp_file"

    echo " - Interpretando con clisp y guardando salida en: $output_file"
    clisp "$lisp_file" > "$output_file"

    echo " - Contenido de $output_file:"
    cat "$output_file"
    echo "----------------------------------------"
done

echo
echo "=== PRUEBAS FRONTEND COMPLETADAS ==="
