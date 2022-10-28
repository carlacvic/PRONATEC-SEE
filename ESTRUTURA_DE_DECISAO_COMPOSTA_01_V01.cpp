#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dia;
	
	printf ("\n");
	
	printf ("Digite o numero correspondente ao dia da semana: ");
	
	scanf ("%d", &dia);
	
	if (dia == 0)
	printf ("Dia da semana : %d - DOMINGO \n", dia);
	
	else if (dia == 1)
	printf ("Dia da semana : %d - SEGUNDA-FEIRA \n", dia);
	
	else if (dia == 2)
	printf ("Dia da semana : %d - TERCA-FEIRA \n", dia);
	
	else if (dia == 3)
	printf ("Dia da semana : %d - QUARTA-FEIRA \n", dia);
	
	else if (dia == 4)
	printf ("Dia da semana : %d - QUINTA-FEIRA \n", dia);
	
	else if (dia == 6)
	printf ("Dia da semana : %d - SEXTA-FEIRA \n", dia);
	
	else if (dia == 7)
	printf ("Dia da semana : %d - SABADO \n", dia);	
	
	else
		
	printf ("O dia da semana deve estar compreendido entre 0 (Domingo) e 7 (Sabado) ! \n\n");
	
		
	system ("pause");
	
	return 0;
}
