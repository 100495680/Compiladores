#!/bin/bash
set -e

# Directorio base (ajusta si hace falta)
BASE_DIR="$(dirname "$0")"

# 1. Compilar trad.y con Bison
echo "Compilando trad.y con bison..."
bison -o trad.tab.c "$BASE_DIR"/trad.y

# 2. Compilar trad.tab.c con GCC
echo "Compilando trad.tab.c con gcc..."
gcc "$BASE_DIR"/trad.tab.c -o "$BASE_DIR"/trad

# 3. Compilar back.y con Bison
echo "Compilando back.y con bison..."
bison -o back.tab.c "$BASE_DIR"/back.y

# 4. Compilar back.tab.c con GCC
echo "Compilando back.tab.c con gcc..."
gcc "$BASE_DIR"/back.tab.c -o "$BASE_DIR"/back

echo
echo "=== INICIANDO TESTS EN tests/00 ==="
echo

# 5. Recorrer cada .c en tests/00
for src in "$BASE_DIR"/tests/00/*.c; do
    name="$(basename "$src" .c)"
    inter="$BASE_DIR/intermedio_${name}.txt"

    echo ">>> Procesando $name.c"
    echo " - Generando intermedio: $inter"
    "$BASE_DIR"/trad < "$src" > "$inter"

    echo " - Contenido de $inter:"
    cat "$inter"

    echo " - Ejecutando back sobre $inter:"
    "$BASE_DIR"/back < "$inter"
    echo "--------------------------------"
done

echo
echo "=== TESTS COMPLETADOS ==="
