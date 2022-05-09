#include<stdio.h>

main(){

printf("Insira a sua idade ");

int idade;

scanf("%d", &idade);

if (idade>=18){
    printf("Adulto");
    return 1;
}

if (idade>=5 && idade<=7){
    printf("Infantil-A");
    return 1;
}

if (idade>=8 && idade<=10){
    printf("infantil-B");
    return 1;
}


if (idade>=11 && idade<=13){
    printf("Juvenil-A");
    return 1;
}

if (idade >= 14 && idade <= 17){
    printf("JUvenil-B");
    return 1;
}

}
