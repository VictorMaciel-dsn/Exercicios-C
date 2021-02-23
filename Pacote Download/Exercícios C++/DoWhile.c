#include<stdio.h>

int main()
{
	float n1, n2, soma, sub, mult, div;
	char op;
	
	printf("Entre com os 2 numeros: ");
	scanf("%f %f", &n1, &n2);

	do
	{
		printf("\n\tMENU\n");
		printf("(+) - Soma\n");
		printf("(-) - Sub\n");
		printf("(*) - Mult\n");
		printf("(/) - Div\n");
		fflush(stdin);
		printf("Qual a opcao: ");
		scanf("%c", &op);		
		
		switch(op)
		{
			case '+':
				soma = n1 + n2;
				printf("SOMA = %.2f\n", soma);
				break;
			case '-':
				sub = n1 - n2;
				printf("SUB = %.2f\n", sub);
				break;
			case '*':
				mult = n1 * n2;
				printf("MULT = %.2f\n", mult);
				break;				
			case '/':
				div = n1 / n2;
				printf("DIV = %.2f\n", div);
				break;								
			default:
				if (op != '#')
				{
					printf("Invalido, Retornando ao MENU...\n");
				}
				break;
		}
	}while(op != '#');	
	
	printf("Saindo do Menu...");
}
