#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dia;
	
	printf ("\n");
	
	printf ("Digite o numero correspondente ao dia da semana: ");
	
	scanf ("%d", &dia);
	
	switch (dia){
		
		case 1:
		printf ("Dia da semana : %d - DOMINGO \n", dia);
		break;
			
		case 2:
		printf ("Dia da semana : %d - SEGUNDA-FEIRA \n", dia);
		break;
		
		case 3:
		printf ("Dia da semana : %d - TERCA-FEIRA \n", dia);	
		break;
		
		case 4:
		printf ("Dia da semana : %d - QUARTA-FEIRA \n", dia);
		break;
			
		case 5:
		printf ("Dia da semana : %d - QUINTA-FEIRA \n", dia);
		break;
		
		case 6:
		printf ("Dia da semana : %d - SEXTA-FEIRA \n", dia);
		break;
			
		case 7:
		printf ("Dia da semana : %d - SABADO \n", dia);	
		break;
		
		default:
		printf ("O dia da semana deve estar compreendido entre 0 (Domingo) e 7 (Sabado) ! \n\n");
		break;
	}
	
	system ("pause");
	
	return 0;
}
