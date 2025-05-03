#!/usr/bin/env bash
set -e

TRAD=./trad3
DIR=prueba

# Crear directorio de pruebas
mkdir -p "$DIR"

echo "=== Generando y ejecutando pruebas en ./$DIR ==="

# Función auxiliar para generar un test
gen_test() {
  local num=$1; shift
  local content="$1"
  local testc="$DIR/test${num}.c"
  local outl="$DIR/out${num}.lisp"

  # Generar .c con contenido y //@ (main)
  cat > "$testc" <<EOF
$content

//@ (main)
EOF

  # Ejecutar traductor
  "$TRAD" < "$testc" > "$outl"
  echo "---- Test $num ----"
  echo "Input: $testc"
  echo "Output: $outl"
  cat "$outl"
  echo
}

# 1. Variables Globales (con main vacío)
gen_test 1 'int a;
int b = 5;
int x, y = 3, z;
int v[4];

main() {
  puts("Hola mundo");
}'

# 2. Función MAIN
gen_test 2 'int a;
main() {
  @ (a + 1);
}'

# 3. Impresión de cadenas (puts) dentro de main
gen_test 3 'int dummy;
main() {
  puts("Hola mundo");
}'

# 4. Impresión con printf dentro de main
gen_test 4 'int x = 7;
main() {
  printf("%d", x);
  printf("%s", "test");
  printf("%d %d", x, x+1);
}'

# 5. Operadores y precedencia dentro de main
gen_test 5 'int a = 1;
int b = 2;
int c = 3;
main() {
  @ (a + b * c);
  @ ((a + b) * c);
  @ (a < b && b != c || ! (c >= a));
}'

# 6. Bucle while dentro de main
gen_test 6 'int i = 1;
main() {
  i = 0;
  while (i != 10) {
    printf("%d", i);
    i = i + 1;
  }
}'

# 7. If / Else dentro de main
gen_test 7 'int a = 0;
main() {
  if (a == 0) {
    puts("cero");
    a = 5;
  } else {
    puts("no cero");
    a = 10;
  }
  printf("%d", a);
}'

# 8. Bucle for dentro de main
gen_test 8 'int sum = 0;
main() {
  for (int i = 0; i < 4; i = i + 1) {
    sum = sum + i;
  }
  printf("%d", sum);
}'

# 9. Variables Locales dentro de main
gen_test 9 'int g = 1;
main() {
  int g = 5;
  printf("%d", g);
  printf("%d", main_g);
}'

# 10. Funciones y return (función auxiliar + main)
gen_test 10 'square(int v) {
  return v * v;
}
main() {
  printf("%d", square(7));
}'

# 11. Vectores (arrays) dentro de main
gen_test 11 'int a[5];
main() {
    a[2] = 123;
    printf("%d", a[2]);
}'
gen_test 12 'int a[5];
main() {
    B=A*10+(23/10);
    printf("%d", a[2]);
}'

gen_test 13 '
int B;
int A;
main(){
    B=A*10+(23/10);
}'
echo "=== Fin de pruebas en ./$DIR ==="
