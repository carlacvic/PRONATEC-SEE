#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int op_menu;
	
	float primeiro, segundo, operacao;
	
	char opcao = 'S';
	
	while (opcao == 'S'){
	
		printf (" MENU : \n\n");
		printf (" 1 - SOMAR  \n");
		printf (" 2 - SUBTRAIR  \n");
		printf (" 3 - MULTIPLICAR  \n");
		printf (" 4 - DIVIDIR \n");	
		printf (" 0 - PARA SAIR \n\n ");	
		printf ("SUA OP��O � : ");
		
		scanf ("%d",&op_menu);
		
		switch (op_menu){
			
			case 1:
				
				printf ("\n \n SOMA : \n\n");
				printf ("\n Digite o primeiro n�mero para somar : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo n�mero para somar : ");
				scanf ("%f", &segundo);
				operacao = primeiro + segundo;
				printf ("\n O resultado da soma � : %.2f", operacao);
			
				break;
				
			case 2:
				
				printf ("\n \n SUBTRA��O : \n\n");
				printf ("\n Digite o primeiro n�mero para subtrair : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo n�mero para subtrair : ");
				scanf ("%f", &segundo);
				operacao = primeiro - segundo;
				printf ("\n O resultado da subtra��o � : %.2f", operacao);			
				
				break;
				
			case 3:
			
				printf ("\n \n MULTIPLICA��O : \n\n");
				printf ("\n Digite o primeiro n�mero para multiplicar : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo n�mero para multiplicar : ");
				scanf ("%f", &segundo);
				operacao = primeiro * segundo;
				printf ("\n O resultado da multiplica��o � : %.2f", operacao);
			
				break;	
				
			case 4:
				
				printf ("\n \n DIVIS�O : \n\n");
				printf ("\n Digite o primeiro n�mero para dividir : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo n�mero para dividir : ");
				scanf ("%f", &segundo);
				
				while(segundo <= 0) {									
				
					printf (" \n O denominador n�o pode ser igual a zero ! Redigite : ");
					scanf("%f", &segundo);
					
				}
				
				operacao = primeiro / segundo;				
				printf ("\n O resultado da divis�o � : %.2f", operacao);
			
				break;			
			
			case 0:
				
				exit(0);
				break;	
			
			default:
				
			printf ("Escolha um n�mero entre 0 e 4 ! \n");
			break;
		}
		
		printf ("\n");
		
		printf (" \n DESEJA CONTINUAR S / N ? ");		
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
