#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int cod_peca;
	
	float vl_peca, vl_total, qt_peca;
	
	printf ("Digite o codigo da peca : \n");
	
	scanf ("%d", &cod_peca);
	
	printf ("Digite o valor da peca : \n");
	
	scanf ("%f", &vl_peca);
	
	printf ("Digite a quantidade de pecas : \n");
	
	scanf ("%f", &qt_peca);
	
	vl_total = qt_peca * vl_peca;
	
	printf ("Valor total da peca e R$ %.2f \n\n", vl_total);
	
	system ("pause");
	
	return 0;
}
