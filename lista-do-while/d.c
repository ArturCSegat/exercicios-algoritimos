#include <stdio.h>

int main (){
    
    int count = 0;
    int count2 = 1;
    int i = 0;
    
    printf("%d\n", count);
    printf("%d\n", count2);
    
    while(i <= 20){
        
        int n = count + count2;
        
        printf("%d\n", n);
        
        count = count2;
        count2 = n;
        
        i++;
        
        
    }
    
    
}
