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
(setq a 3)
(setq b 4)
(setq c 10)

(defun main ()
  (print (+ a b))               
  (print (* a b))               
  (print (- c a))               
  (print (/ (* c 2) (+ b 2)))   
  (print (- b))                 
  (print (/ (+ a (* b c)) 5))  
)
EOF

# Ejecutar el programa y redirigirle la entrada
echo "Ejecutando ./back1 con prueba.txt"
./back1 < prueba.txt
