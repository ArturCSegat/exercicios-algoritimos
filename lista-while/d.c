// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int count = 1;
    int x, y, r;

    while (count <= 5){
        printf("Insira dois numeros ");
        scanf("%d %d", &x, &y);

        r = y + x;

        printf("%d \n", r);

        count++;
    }


    return 0;

}
