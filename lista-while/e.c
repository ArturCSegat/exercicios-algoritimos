// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int count = 1;
    int x, y, r;


    char w;
    do{
        printf("voce quer fazer uma subtração: s/n ");
        scanf(" %c", &w);

        printf("Insira dois numeros ");
        scanf("%d %d", &x, &y);

        r = x - y;

        printf("%d \n", r);

    }
    while(w == 's');

    return 0;

}
