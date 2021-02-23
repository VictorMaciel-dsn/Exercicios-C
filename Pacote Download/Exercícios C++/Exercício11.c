#include <stdio.h>
int main()

{
	int num,fat;
	
	printf("Entre com um numero: ");
	scanf("%i", &num);
	
	for(fat = 1; num > 1; num = num - 1)
	fat = fat * num;
	printf("\n\tFatorial Calculado = %i", fat);
}

