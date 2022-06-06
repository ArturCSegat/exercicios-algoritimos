#include <stdio.h>

main(){

    int n, contador, count;
    count = 0;
    contador = 0;
    while (contador < 11){
        printf("insira um numero ");
        scanf("%d", &n);

        if (n > 29 && n < 91){
            count++;
        }

        contador++;
    }

    printf("%d", count);

}
