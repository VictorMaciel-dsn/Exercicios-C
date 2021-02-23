#include <stdio.h>

int main ()

{
	int num1, num2, num3, soma;
	
	printf("Entre com o num1:  ");
	scanf("%d", &num1);
	
	printf("Entre com o num2:  ");
	scanf("%d", &num2);
	
	printf("Entre com o num3:  ");
	scanf("%d", &num3);
	
	soma= num1+num2+num3;
	printf("A soma eh: %d \n", soma);
	
	return 0;
}
