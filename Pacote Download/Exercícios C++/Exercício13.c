#include <stdio.h>
int main()

{
	
	int num, cont, var, varMAIOR;
	var = 0;
	
	for(cont = 1; cont <= 15; cont = cont + 1)
	{
		printf("Numero [%i]: ", cont);
		scanf("%i", &num);
		
		if(var < num)
		{
			var = num;
			
			if(varMAIOR < num)
			{
				varMAIOR = num;
			}
		}
	}
	printf("\n\tMAIOR NUMERO: %i", var);
	printf("\n\t SEGUNDO MAIOR NUMERO: %i", var);
}
