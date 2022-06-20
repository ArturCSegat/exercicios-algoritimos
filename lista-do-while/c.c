#include <stdio.h>

int main (){
    
    printf("Insira um numero: ");
    int n, count = 1;
    scanf("%d", &n);
    while(count <= 10){

        printf("%d * %d = %d\n",n, count, n * count);
        count++;
    }
    
}
