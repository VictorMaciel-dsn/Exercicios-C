#include <stdio.h>
	
	int main()
	
{
	int Nota1, Nota2, Nota3, Nota4, Media, Mtotal;
	
	printf("Entre com a Nota1:  ");
	scanf("%d", &Nota1);
	
	printf("Entre com a Nota2:  ");
	scanf("%d", &Nota2);
	
	printf("Entre com a Nota3:  ");
	scanf("%d", &Nota3);
	
	printf("Entre com a Nota4:  ");
	scanf("%d", &Nota4);
	
	Media = Nota1*1 + Nota2*2 + Nota3*3 + Nota4*4; 
	printf("A media total eh: %d\n", Mtotal = Media/10);
	
	return 0;
	
}
