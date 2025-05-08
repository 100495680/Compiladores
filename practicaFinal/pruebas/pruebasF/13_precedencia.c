
main() {
    int a = 3, b = 4;
    int c = 5;
    
    // 1) + vs *    → 3 + (4 * 5) = 23
    if (a + b * c == 23){
        puts("23");
    }
    
    // 2) == vs <   → (3<4)==(4<5) = 1
    if ((a < b) == (b < c)){
        puts("1");
    }
    
    // 3) && vs ||  → a< b || b>c && c==5 = 1
    if (a < b || b > c && c == 5){
        puts("1");
    }
    
    // 4) unarios vs / * → -a * +b / c = -2
    if (-a * +b / c == -2){
        puts("-2");
    }
}

//@ (main)
