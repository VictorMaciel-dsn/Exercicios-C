#include <stdio.h>

int main()

{
	
	int area,b,h;
	
	printf("Digite a base: ");
	scanf("%d",&b);

	printf("Digite a altura: ");
	scanf("%d",&h);	
	
	area=b*h/2;
	printf("A area eh:  %d\n", area);
	
	return 0;
}
