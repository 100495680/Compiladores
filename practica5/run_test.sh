#!/bin/bash

# Compilar con Bison
echo "Compilando con bison..."
bison back4.y

# Compilar con GCC
echo "Compilando con gcc..."
gcc back4.tab.c -o back4

# Crear archivo de entrada con el código de prueba
echo "Generando archivo de entrada: prueba.txt"
cat <<EOF > prueba.txt
(setq a 0)
(setq b 11)
(setq c 0)
(defun main ()
(setq a 1)
(setq a (+ b c))
(setq a c))
EOF

# Ejecutar el programa y redirigirle la entrada
echo "Ejecutando ./back4 con prueba.txt"
./back4 < prueba.txt
