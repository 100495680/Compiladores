#!/bin/bash

# Compilar con Bison
echo "Compilando con bison..."
bison trad1.y

# Compilar con GCC
echo "Compilando con gcc..."
gcc trad1.tab.c -o trad1

# Crear archivo de entrada con el código de prueba
echo "Generando archivo de entrada: prueba.txt"
cat <<EOF > prueba.txt
int a, b = 11, c;
main () {
    @ 1 + 1;
    # @ 1 - 1;
    # a = 1;
    # a = b + c;
};
EOF

# Ejecutar el programa y redirigirle la entrada
echo "Ejecutando ./trad1 con prueba.txt"
./trad1 < prueba.txt
