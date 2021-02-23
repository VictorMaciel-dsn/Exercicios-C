#include <stdio.h>

int main()

{
	float dist,tempo,velMedia;
	
	printf("Entre com a distancia (em KM): ");
	scanf("%f", &dist);
	
	printf("Entre com o tempo (em Horas): ");
	scanf("%f", &tempo);
	
	velMedia = dist / tempo;
	printf("VelMedia: %2.f\n", velMedia);
	
	if(velMedia > 80) 
	{
		printf("Velocidade acima do limite!");
	}
	
	else
	{
		printf("Velocidade Media permitida!");
	}
	
}
