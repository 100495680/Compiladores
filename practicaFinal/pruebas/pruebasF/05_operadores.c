#include <stdio.h>
main() {
    int a = 1;
    int b = 0;
    int c = 2;
    // mezcla &&, ||, ==, !=, <, >, <=, >=, %, +, -, *, /
    if ((a + c * 3) % 2 == 1 && b != 0 || a <= c) {
        puts("OK");
    }
}
//@ (main)
