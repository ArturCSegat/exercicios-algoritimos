#include <stdio.h>

main(){

	int a, b, c;

	printf("Entre com tres numeros ");

	scanf("%d %d %d", &a, &b, &c);

	if(a >= b){

		if(b >= c){
			printf("%d %d %d", a, b ,c);
		}

		else{
			printf("%d %d %d", a ,c ,b);
		}

	}

	else if(b >= c){

		if(a >= c){
			printf("%d %d %d", b, a, c);
		}

		else{
			printf("%d %d %d", b, c, a);
		}
	}

	else{

		printf("%d %d %d", c, b, a);

	}


}
