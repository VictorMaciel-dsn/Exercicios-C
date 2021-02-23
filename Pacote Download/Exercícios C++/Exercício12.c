#include <stdio.h>
int main()

{
	
	int num, cont, var;
	var = 0;
	
	for(cont = 1; cont <= 25; cont = cont + 1)
	{
		printf("Numero [%i]: ", cont);
		scanf("%i", &num);
		
		if(var < num)
		{
			var = num;
		}
	}
	printf("\n\tMAIOR NUMERO: %i", var);
}
