#include <stdio.h>
#include "func.h"

int main(void){
	int numerador, divisor, resultado;

	printf("Entre com o numerador: ");
	scanf("%d", &numerador);

	printf("Entre com o divisor: ");
	scanf("%d", &divisor);

	resultado = e_divisivel(numerador, divisor);

	if(resultado){
		printf("\nO numero e divisivel\n");
	}else{
		printf("\nO numero nao e divisivel");
	}

	return 0;
}
