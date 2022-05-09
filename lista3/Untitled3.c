// Online C compiler to run C program online
#include <stdio.h>

main() {
    char letra1, letra2;

    printf("entre com as duas letras ");

    scanf("%c %c", &letra1, &letra2);

    if (letra1=='s' && letra2 == 'p'){
        printf("paulista");
    }

    else if (letra1=='r' && letra2 == 's'){
        printf("gaucho");
    }

    else if (letra1=='m' && letra2 == 'g'){
        printf("mineiro");
    }

    else{
        printf("outros estado");
    }
}
