#include <stdio.h>

int main()

{
	int num,quadrado;
	
	num = 0; 
	
	while(num < 5)
{
	num = num + 1;
	quadrado = num * num;
	
	printf("Quadrado [%i] = %i\n", num, quadrado);
}
		
}
