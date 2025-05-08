main(){
    int a;
    int b = 10;
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
    puts("Operacion a = b + c");
    puts("Valor de a:");
    printf("%d", a);
    a = b - c;
    puts("Operacion a = b - c");
    puts("Valor de a:");
    printf("%d", a);
    a = b * c;
    puts("Operacion a = b * c");
    puts("Valor de a:");
    printf("%d", a);
    a = b / 3;
    puts("Operacion a = b / 3");
    puts("Valor de a:");
    printf("%d", a);
    a = b % 10;
    puts("Operacion a = b % 10");
    puts("Valor de a:");
    printf("%d", a);
    a = !b;
    puts("Operacion a = !b");
    puts("Valor de a:");
    printf("%d", a);
    a = +29;
    puts("Operacion a = +29");
    puts("Valor de a:");
    printf("%d", a);
    a = -1;
    puts("Operacion a = -1");
    puts("Valor de a:");
    printf("%d", a);
    while (a < 5){
        puts("while");
        a = a + 1;
    }
    if (a % 2){
        puts("PAR");
    } else {
        puts("IMPAR");
    }
}
//@ (main)
