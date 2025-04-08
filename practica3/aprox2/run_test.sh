#!/bin/bash

# Cambiar al directorio del proyecto
cd ~/Escritorio/"Procesadores del lenguaje"/Compiladores/practica3/aprox2 || exit 1

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
    # @ 1 + 1;
    # @ 1 - 1;
    # a = 1;
    # a = b + c;
    # puts("hola");
    # puts("adios");
    # puts("olol");
    # printf("abcd", "22");
    printf("abcd", "asdasdasd", "12312");
};
//@ (main)
EOF

# Ejecutar el programa y redirigirle la entrada
echo "Ejecutando ./trad2 con prueba.txt"
./trad2 < prueba.txt
