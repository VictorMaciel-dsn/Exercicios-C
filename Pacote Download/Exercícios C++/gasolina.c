#include <stdio.h>

int main ()

{
	int grana,gasolina;
	
	printf("O litro da gasolina eh: 5\n");
	printf("Quanta grana voce tem: ");
	scanf("%d", &grana);
	
	gasolina=grana/5;
	printf("Litros obtidos: %d\n",gasolina );
	
	return 0;
	
}
