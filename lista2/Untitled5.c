// Online C compiler to run C program online
#include <stdio.h>

main(){

printf("entre com a primeira letra de seu estado ");
char sigla;
scanf("%c", &sigla);


switch(sigla){

    case('r'):

        printf("gaucho");
        break;


    case('s'):

        printf("paulista");
        break;


    case('m'):
        printf("mineiro");
        break;

    default:
        printf("outro estado");
        break;


}

}
