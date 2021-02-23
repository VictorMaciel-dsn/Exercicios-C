#include <stdio.h>

int main()

{
	float temp;
	
	printf("Entre com a temperatura: ");
	scanf("%f", &temp);
	
	if(temp > 36.5) 
	{
		printf("Esta com febre!\n");
	}
	
	else
	{
		printf("Nao esta com febre!\n");
	}
}
