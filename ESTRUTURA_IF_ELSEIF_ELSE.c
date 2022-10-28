#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dias;
	
	printf ("Digite o dia da semana : \n");
	
	scanf ("%d",&dias);
	
	if (dias == 1)
	printf ("Dia da semana %d - DOMINGO \n", dias);
	
	else if (dias == 2)
	printf ("Dia da semana %d - SEGUNDA-FEIRA \n", dias);

	else if (dias == 3)
	printf ("Dia da semana %d - TERCA-FEIRA \n", dias);
	
	else if (dias == 4)
	printf ("Dia da semana %d - QUARTA-FEIRA \n", dias);
	
	else if (dias ==5)
	printf ("Dia da semana %d - QUINTA-FEIRA \n", dias);
	
	else if (dias == 6)
	printf ("Dia da semana %d - SEXTA-FEIRA \n", dias);
	
	else if (dias == 7)
	printf ("Dia da semana %d - SABADO \n", dias);
	
	else
	printf ("Nao e dia de semana ! \n");
	
	system ("pause");
	
	return 0;
}
