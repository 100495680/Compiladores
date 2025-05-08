#!/bin/bash
set -e

# Directorio base (ajusta si hace falta)
BASE_DIR="$(cd "$(dirname "$0")" && pwd)"
PRUEBAS_DIR="$BASE_DIR/pruebasB"

# 1. Compilar trad.y con Bison (frontend)
echo "Compilando trad.y con bison..."
bison -o "$BASE_DIR"/trad.tab.c "$BASE_DIR"/trad.y

# 2. Compilar trad.tab.c con GCC
echo "Compilando trad.tab.c con gcc..."
gcc "$BASE_DIR"/trad.tab.c -o "$BASE_DIR"/trad

# 3. Compilar back.y con Bison (backend)
echo "Compilando back.y con bison..."
bison -o "$BASE_DIR"/back.tab.c "$BASE_DIR"/back.y

# 4. Compilar back.tab.c con GCC
echo "Compilando back.tab.c con gcc..."
gcc "$BASE_DIR"/back.tab.c -o "$BASE_DIR"/back

echo
echo "=== INICIANDO PRUEBAS BACKEND EN $PRUEBAS_DIR ==="
echo

# 5. Para cada .c en pruebasB:
#    a) generar Lisp intermedio con trad
#    b) pasar ese Lisp a back y guardar la salida en un .txt
for src in "$PRUEBAS_DIR"/*.c; do
    name="$(basename "$src" .c)"
    lisp_file="$BASE_DIR"/"$name".l
    output_file="$BASE_DIR"/salida_backend_"$name".txt

    echo ">>> Procesando $name.c"
    echo " - Generando Lisp intermedio: $lisp_file"
    "$BASE_DIR"/trad < "$src" > "$lisp_file"

    echo " - Ejecutando back sobre $lisp_file y guardando en: $output_file"
    "$BASE_DIR"/back < "$lisp_file" > "$output_file"

    echo " - Contenido de $output_file:"
    cat "$output_file"
    echo "----------------------------------------"
done

echo
echo "=== PRUEBAS BACKEND COMPLETADAS ==="
