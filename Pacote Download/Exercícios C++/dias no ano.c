#include <stdio.h>

int main()
{

int data,mes,dias;


	printf("Entre com o dia do mes: ");
	scanf("%d",&dias);
	
	printf("Entre com o mes:  ");
	scanf("%d",&mes);
	
	data=(mes-1)*30+dias;
	printf("Ja passou: %d", data);
	printf(" dias");

}
