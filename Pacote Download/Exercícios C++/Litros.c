#include <stdio.h>
	
	int main()
	
	{
	
	float ml, Litros, qtd1, qtd2, qtd3;
	
	printf("Quantas latas de 335ml ele comprou?  ");
	scanf("%f", &qtd1);
	
	printf("Quantas garrafas de 290ml ele comprou?  ");
	scanf("%f", &qtd2);
	
	printf("Quantas garrafas de 2l ele comprou?  ");
	scanf("%f", &qtd3);
	
	ml = (qtd1*335) + (qtd2*290) + (qtd3*2000);
	Litros = ml / 1000;
	
	printf("A quantidade em Litros eh: %.3f\n", Litros );
	
	return 0;
	
	}
