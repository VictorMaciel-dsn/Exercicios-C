#include <stdio.h>

int main()
{
	float valorBruto, desc, valorLiquido;
	int opcao;
	
	printf("Entre com o valor da compra: ");
	scanf("%f", &valorBruto);
	
	printf("Qual a opcao de desconto? ");
	scanf("%i", &opcao);

	switch(opcao)
	{
		case 1:
			desc = valorBruto * 0.1;
			valorLiquido = valorBruto - desc;
			printf("# Valor Liquido com desconto da opcao %i: %.2f\n", opcao, valorLiquido);			
			break;
		case 2:
			desc = valorBruto * 0.2;
			valorLiquido = valorBruto - desc;
			printf("# Valor Liquido com desconto da opcao %i: %.2f\n", opcao, valorLiquido);
			break;
		case 3:
			desc = valorBruto * 0.3;
			valorLiquido = valorBruto - desc;
			printf("# Valor Liquido com desconto da opcao %i: %.2f\n", opcao, valorLiquido);			
			break;
		case 4:
			desc = valorBruto * 0.4; 
			valorLiquido = valorBruto - desc; 
			printf("# Valor Liquido com desconto da opcao %i: %.2f\n", opcao, valorLiquido);
			break;
		default:
			printf("# Valor Bruto sem desconto: %.2f", valorBruto);
			break;
	}
}
