#include <stdio.h>

main(){

    float contador;
    float valor, soma, media;

    while (contador < 4){
        printf("Entre com um valor ");
        scanf("%f", &valor);
        soma = soma+valor;

        contador++;
    }

    media = soma / contador;
    printf("%f", media);
}
