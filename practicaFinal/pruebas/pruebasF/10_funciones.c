square (int v) {
    return v * v; 
    }
sum (int x, int y) { return x + y; }

main() {
    int r1, r2;
    r1 = square(7);
    r2 = sum(3, 4);
    printf("%d %d\n", r1, r2);
    // llamada como procedimiento (valor ignorado)
    square(5);
}
//@ (main)
