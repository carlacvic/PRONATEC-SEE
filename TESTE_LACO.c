#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dias;
	
	char opcao;
	
	opcao = 's';	

	while (opcao == 's'){
	
		printf ("Digite o dia da semana : \n");
		
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
				
			printf ("Dia da semana %d - SABADO \n", dias);
			break;
				
			default:
				
			printf ("Nao e dia de semana ! \n");
			break;
		}
		
		opcao = ' ';
		
		
		printf ("Deseja continuar ?   \n");
		
		scanf ("%c",&opcao); 		
	
		if (opcao == 's')		
		system ("cls");
		
	}	
		
	system ("pause");
	
	return 0;
}
