#include<stdio.h>
int main()
{
	int num, cont, soma;
	
	printf("\tEntre com 30 numeros:\n\n");
	soma=0;
		
	for(cont = 1; cont <= 30; cont = cont + 1)
    {	
		printf("\tNumero [%i]: ", cont);
		scanf("%i", &num);	
	
		if ( num % 2 > 0) 
		{
		soma = soma + num;  
    	}	    	
	}
	printf("\n\t Soma dos numeros impares: %i", soma);	
 }
