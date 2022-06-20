#include <stdio.h>

int main (){
    int count = 5;
     
    do{
        if (count % 4 == 0){
            printf("%d\n", count);
        
        }
        count++;
    }while(count <= 87);
}
