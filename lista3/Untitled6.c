#include <stdio.h>

main(){

    int codigo;

    printf("qual o codigo da revista? ");
    scanf("%d", &codigo);


    switch(codigo){

        case(101):

            printf("o preço da revista veja %d", 297);
            break;
        case(102):
            printf("o preço da revista exame %d", 184);
            break;
        case(103):
           printf("o preço da revista info %d", 107);
            break;
        case(104):
            printf("o preço da revista colecao info %d", 139);
            break;
        case(105):
           printf("o preço da revista voce sa %d", 90);
            break;

        default:
            printf("insira um planeta valido");


    }
}
