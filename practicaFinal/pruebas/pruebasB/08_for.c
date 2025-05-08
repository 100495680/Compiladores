#include <stdio.h>

int i;
int suma = 0;
int n = 5;

main() {

    for (i = 0; i < n; i = i + 1) {
        suma = suma + i;
    }
    printf("%d\n", suma);
}
//@ (main)
