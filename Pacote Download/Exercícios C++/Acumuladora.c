#include <stdio.h>

int main()

{
	int var,soma;
	var = 1;
	soma = 0;
	
	while(var<=10)
	
	{
		printf("Var - %i \n", var);
		printf("Soma - %i \n\n", soma);
		soma = soma + var;
		var = var + 1;
	}	
	
	printf("Soma = %i\n", soma);
}
