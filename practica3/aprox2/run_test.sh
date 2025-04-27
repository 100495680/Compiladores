#!/bin/bash

# Compilar con Bison
echo "Compilando con bison..."
bison trad2.y

# Compilar con GCC
echo "Compilando con gcc..."
gcc trad2.tab.c -o trad2

# Crear archivo de entrada con el código de prueba
echo "Generando archivo de entrada: prueba.txt"
cat <<EOF > prueba.txt
int a, b = 11, c;
main () {
    a = 1;
    a = b + c;
};
//@ (main)
EOF

# Ejecutar el programa y redirigirle la entrada
echo "Ejecutando ./trad2 con prueba.txt"
./trad2 < prueba.txt
