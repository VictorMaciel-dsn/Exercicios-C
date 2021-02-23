#include <stdio.h>

int main()

{
	float grama,kg,valor;
	
	printf("1kg = 20 reais \n");
	printf("Quantas gramas deu sua comida? ");
	scanf("%f",&grama);
	 
	kg=grama/1000;

	printf("Kg::: %.1f\n",kg);
	
	valor=kg*20;
	
	printf("Vc vai pagar: %.3f\n", valor);
	
	return 0;
}
