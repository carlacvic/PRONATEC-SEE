#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int dias;
	
	char opcao = 'S';
	
	while (opcao == 'S'){
	
		printf ("Digite o dia da semana : ");
		
		scanf ("%d",&dias);
		
		switch (dias){
			
			case 1:
				
			printf ("Dia da semana %d - DOMINGO \n", dias);
			break;
				
			case 2:
				
			printf ("Dia da semana %d - SEGUNDA-FEIRA \n", dias);
			break;
				
			case 3:
			
			printf ("Dia da semana %d - TERCA-FEIRA \n", dias);
			break;	
				
			case 4:
				
			printf ("Dia da semana %d - QUARTA-FEIRA \n", dias);
			break;
			
			case 5:
			
			printf ("Dia da semana %d - QUINTA-FEIRA \n", dias);
			break;
				
			case 6:
				
			printf ("Dia da semana %d - SEXTA-FEIRA \n", dias);
			break;	
				
			case 7:
				
			printf ("Dia da semana %d - SÁBADO \n", dias);
			break;
				
			default:
				
			printf ("Nao e dia de semana ! \n");
			break;
		}
		
		printf ("\n");
		
		printf ("DESEJA CONTINUAR S / N ? ");		
		scanf (" %c",&opcao); 
		
		opcao = toupper(opcao);
		
		if (opcao == 'S')		
		system ("cls");		
		
		else
		exit(0);
		
	}	
		
	system ("pause");
	
	return 0;
}
