#!/bin/bash

# Compilar trad.y con Bison
echo "Compilando trad.y con bison..."
bison -o trad.tab.c trad.y

# Compilar trad.tab.c con GCC
echo "Compilando trad.tab.c con gcc..."
gcc trad.tab.c -o trad

# Compilar back.y con Bison
echo "Compilando back.y con bison..."
bison -o back.tab.c back.y

# Compilar back.tab.c con GCC
echo "Compilando back.tab.c con gcc..."
gcc back.tab.c -o back

# Crear archivo de entrada en C para trad.y
echo "Generando archivo de entrada en C: entrada.c"
cat <<EOF > entrada.c
int a, b = 10, c;
main(){
    int a, b = 10; 
    int c;
    if (a == 0 || b == 0 || c == 0){
        puts("|| ||");
    }
    if (a == 0 && b == 0 || c == 1){
        puts("&& ||");
    }
    if (a == 0 && b == 0 && c == 0){
        puts("&& &&");
    }
    if (a == 0 || b == 0 && c == 1){
        puts("|| &&");
    }
    if (a == 0 || b == 0){
        puts("||");
    }
    if (a == 0 && b == 0){
        puts("&&");
    }
    if (a != 0){
        puts("!=");
    }
    if (a == 0){
        puts("==");
    }
    if (a > 0){
        puts(">");
    }
    if (a < 0){
        puts("<");
    }
    if (a >= 0){
        puts(">=");
    }
    if (a <= 0){
        puts("<=");
    }
    a = b + c;
    a = b - c;
    a = b * c;
    a = b / c;
    a = b % c;
    a = !b;
    a = +29;
    a = -29;
    while (a < 5){
        puts("while");
    }
    if (a % 2){
        puts("PAR");
    } else {
        puts("IMPAR");
    }
}
//@ //@ main
EOF

# Ejecutar trad y guardar salida intermedia en archivo
echo "Ejecutando ./trad con entrada.c"
./trad < entrada.c > intermedio.txt

# Mostrar la salida intermedia
echo "Salida intermedia generada:"
cat intermedio.txt

# Ejecutar back con la salida de trad como entrada
echo "Ejecutando ./back con intermedio.txt"
./back < intermedio.txt
