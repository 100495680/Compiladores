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
