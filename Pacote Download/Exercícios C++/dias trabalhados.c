#include <stdio.h>

int main ()

{
	
	float DiasTrabalhados,Pagamento;
	
	printf("Quantidade de dias trabalhados: ");
	scanf("%f", &DiasTrabalhados);
	
	Pagamento= DiasTrabalhados*15*0.92;
	
	printf("O valor do pagamento sera:  %.2f\n", Pagamento);
	
	return 0;
	
}
