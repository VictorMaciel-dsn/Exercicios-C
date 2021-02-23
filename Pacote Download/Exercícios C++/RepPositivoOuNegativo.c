#include <stdio.h>

int main()
{
	int num;
	printf("Entre com o numero: ");
	scanf("%i", &num);
	
	while(num >= 0)
	{
		printf("Legal, o numero eh POSITIVO: %i \n", num);
	
		printf("Entre com o numero: ");
		scanf("%i", &num);
	}
	
	printf("Saindo do programa, voce digitou NEGATIVO!");
}
