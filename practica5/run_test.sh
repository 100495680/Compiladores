#!/bin/bash

# Compilar con Bison
echo "Compilando con bison..."
bison back1.y

# Compilar con GCC
echo "Compilando con gcc..."
gcc back1.tab.c -o back1

# Crear archivo de entrada con el código de prueba
echo "Generando archivo de entrada: prueba.txt"
cat <<EOF > prueba.txt
(setq a 1)
(setq b 2)
(setq c 10)
(defun square ()
  (print (* a a))            
  (print (+ b b))            
)
(defun sum_and_diff ()
  (print (+ a b))            
  (print (- c a))            
)
(defun main ()
  (print (* (+ a b) c))   
  (print (- c b))           
)
EOF

# Ejecutar el programa y redirigirle la entrada
echo "Ejecutando ./back1 con prueba.txt"
./back1 < prueba.txt
