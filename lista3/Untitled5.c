#include <stdio.h>

main(){

    int planeta;
    float peso, p_planeta;

    printf("\n qual o numero do planeta? ");
    scanf("%d", &planeta);
    printf("qual o peso na terra? ");
    scanf("%f", &peso);

    switch(planeta){

        case(1):
            p_planeta = (peso/10) * 0.37;
            printf("o peso e %f em mercurio", p_planeta);
            break;
        case(2):
            p_planeta = (peso/10) * 0.88;
            printf("o peso e %f em venus", p_planeta);
            break;
        case(3):
            p_planeta = (peso/10) * 0.38;
            printf("o peso e %f em marte", p_planeta);
            break;
        case(4):
            p_planeta = (peso/10) * 2.64;
            printf("o peso e %f em jupiter", p_planeta);
            break;
        case(5):
            p_planeta = (peso/10) * 1.15;
            printf("o peso e %f em saturno", p_planeta);
            break;
        case(6):
            p_planeta = (peso/10) * 1.17;
            printf("o peso e %f em urano", p_planeta);
            break;
        default:
            printf("insira um planeta valido");


    }

}
