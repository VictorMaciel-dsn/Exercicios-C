#include <stdio.h>

int main()

{

int g, kg;

	printf("Entre com quilograma: ");
	scanf("%d", &kg);
	
	g= kg*1000;
	
	printf("Vc tem: %d", g);
	printf(" gramas");
	
	return 0;
}
