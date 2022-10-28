#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dias, opcao;
	
	opcao = 1;
	
	while (opcao == 1){
	
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
				
			printf ("Dia da semana %d - SABADO \n", dias);
			break;
				
			default:
				
			printf ("Nao e dia de semana ! \n");
			break;
		}
		
		printf ("\n");
		
		printf ("Tecle 1 para continuar ou qualquer numero para sair : ");
		
		scanf ("%d",&opcao); 
		
		if (opcao == 1)		
		system ("cls");
		
	}	
		
	system ("pause");
	
	return 0;
}
