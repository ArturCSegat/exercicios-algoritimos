// primeiramente o algoritimo ira receber a letra numa variavel do tipo char
// usando um switch case ira comparar a letra com três casos: 'A', 'B', 'C'

// se nenhum dos casos ocorrer, o padrão (default) sera executado dizendo "Letra desconhecida"

#include <stdio.h>

main(){

	printf("Entre com uma letra ");

	char letra;

	scanf("%c", &letra);

	switch(letra){

		case'A':
			printf("A");
			break;

		case'B':
			printf("B");
			break;
		case'C':
			printf("C");
			break;

		default:
			printf("Letra desconhecida");
			break;
	}

}