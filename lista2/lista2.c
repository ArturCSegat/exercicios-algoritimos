// Online C compiler to run C program online
#include <stdio.h>

float area_do_circulo(float raio)

{
    if (raio < 0) {
        printf("Raio negativo");
        return -1;
    }

    float area = raio * raio * 3.14;

    return area;

}

void par_ou_impar(int x){

    if (x % 2 == 0) {
        printf("Numero par");

    }

    else{

    printf("Numero impar");

    }

}

main() {
    // Write C code here

    par_ou_impar(8);

}
