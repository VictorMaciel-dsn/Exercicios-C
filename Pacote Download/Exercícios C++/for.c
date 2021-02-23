#include<stdio.h>

int main()
{
	float nota, soma, media;
	int cont;
	
	soma = 0;

	for(cont = 1; cont <= 15; cont = cont + 1)
	{
		printf("Nota [%i]: ", cont);
		scanf("%f", &nota);
		soma = soma + nota;	
		printf("Soma atual: %.2f\n\n", soma);	
	}

	media = soma / 15;
	printf("Sua media foi %.2f\n", media);
}

