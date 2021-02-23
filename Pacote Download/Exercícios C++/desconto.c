#include <stdio.h>

int main()

{
	float valor, desconto;
	
	printf("O valor eh:  ");
	scanf("%f", &valor);
	
	desconto=valor*0.9;
	printf("O valor com o desconto sera:  %.4f\n", desconto);
	
}
