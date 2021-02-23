#include <stdio.h>
int main()

{
	int soma,num;
	soma = 0;
	num = 7;
	
	while(num >= 2 && num <= 300)
	
	{
	
	printf("%i ", num);
	soma = soma + num;
	num = num + 7;	
		
	}
	
	printf("\n\n\tSOMA = %i\n", soma);
}

