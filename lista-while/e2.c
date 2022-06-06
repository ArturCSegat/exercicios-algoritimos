// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int count = 1;
    int x, y, r;


    char w = 's';

    while(w == 's'){
        printf("Quer fazer uma subtração? s/n ");
        scanf("\n%c", &w);

        if(w != 's'){break;}

        else{
            printf("Insira dois numeros ");
            scanf("%d %d", &x, &y);

            r = x - y;

            printf("%d \n", r);
        }



    }

    return 0;

}

