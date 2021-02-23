#include <stdio.h>

int main()

{
	int A,B,Soma,Multi,Subtracacao,Divisao;
	
	printf("Entre com o numero A: ");
	scanf("%i", &A);
	
	printf("Entre com o numero B: ");
	scanf("%i", &B);
	
	Soma = A+B;
	Divisao = A/B;
	Multi = A*B;
	Subtracacao = A-B;
	
	printf("A Soma eh: %i\n", Soma);
	printf("A Divisao eh: %i\n", Divisao);
	printf("A Multi eh: %i\n", Multi);
	printf("A Subtracacao eh: %i\n", Subtracacao);
}

