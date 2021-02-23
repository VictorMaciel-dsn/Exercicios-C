#include <stdio.h>

int main()

{
	int num,cont,quant;
	
	printf("\t Entre com 25 numeros e descubra quantos deles foram negativos\n\n");
	quant = 0;
	
	for(cont = 1; cont <= 25; cont = cont + 1)
	{
		printf("Numero [%i]: ", cont);
		scanf("%i", &num);
		
		if ( num < 0)
		{
			quant = quant + 1;
		}
		
	}
	printf("\n\tQuantidade de numeros negativos: %i", quant);
}
