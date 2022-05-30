// Cria uma variavel chamda senha com o valor 1234
// Pede um valor int para o usuario e compara com a variavel senha

// se forem iguais permite o acesso

// se nao nao

#include <stdio.h>

main(){

	int senha = 1234;

	int tent;

	printf("insira sua senha ");

	scanf("%d", &tent);

	if (tent == senha){
		printf("Acesso permitido");
	}

	else{
		printf("Acesso negado");
	}

}
