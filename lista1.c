#include <stdio.h>
#include <math.h>


int exercicio_dois(int n){

    int quadrado = n * n;
    int cubo = pow(n,3);

    printf("%d \n", quadrado);
    printf("%d", cubo);

    return 1;

}

int exercicio_tres(int ano){

    int ano_atual = 2022;

    int idade = ano_atual - ano;

    printf("sua idade é %d", idade);

    return 1;


}

int exercicio_quatro(int c){

    float f = c * 1.8 + 32;

    printf("%f", f);

    return 1;

 }

int exercicio_cinco(int a, int b, int c){

    int media = (a * 2 + b * 3 + c * 5)/10;

    printf("%d", media);

    return 1;


 }

void exercicio_seis_i(int a, int b, int c){
    int resultado = a * pow(b, c);
    
    printf("%d", resultado);
}

void exercicio_seis_g(int a){
    int z = ((a*a) * sqrt(3))/4;
    
    printf("%d", z);
}

void exercicio_seis_b(int a, int b, int c, int n){
    int j = pow(a-b, 2);
    int k = pow(c-n, 2);
    printf("%d", j - k);
}

void exercicio_seis_a(int a, int b){
    int c = pow(a-b, 2);
    printf("%d", c);
}

int exercicio_seis_c(int a, int b, int c){
    int bas = (b*b) - 4 * a * c;
    
    printf("%d ", bas);
    return bas;
}

void exercicio_seis_d(int x){
    int y = pow(x, 1/3.);
    printf("%d", y);
}

void exercicio_seis_e(int a, int b,int c){
    int baskara = exercicio_seis_c(a, b, c);
    int raiz = pow(baskara, 1/2.);
    printf("%d", raiz);
}

void exercicio_seis_f(int x){
    printf("%d", x*x);
}

void exercicio_seis_h(float a, float b, float c, float d, float n){
    float r = a - b * (c + n*n) / d;
    printf("%f", r);
}

int main(){

    

    exercicio_seis_c(5, 8, 3);
    
    


    return 1;


}
