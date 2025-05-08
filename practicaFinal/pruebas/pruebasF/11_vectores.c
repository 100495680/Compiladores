#include <stdio.h>
int arr[5];

main() {
    int i;
    for (i = 0; i < 5; i = i + 1) {
        arr[i] = i * 2;
    }
    printf("%d %d %d %d %d\n",
           arr[0], arr[1], arr[2], arr[3], arr[4]);
}
//@ (main)
