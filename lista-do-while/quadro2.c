#include <stdio.h>

int main (){
    int count = 100, soma = 0;
    do{
        if (count % 2 == 0){
            soma = soma + count;
        }
        count++;
    }while(count <= 200);
    
    printf("%d", soma);
}
