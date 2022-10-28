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
		printf ("SUA OPÇÃO É : ");
		
		scanf ("%d",&op_menu);
		
		switch (op_menu){
			
			case 1:
				
				printf ("\n \n SOMA : \n\n");
				printf ("\n Digite o primeiro número para somar : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo número para somar : ");
				scanf ("%f", &segundo);
				operacao = primeiro + segundo;
				printf ("\n O resultado da soma é : %.2f", operacao);
			
				break;
				
			case 2:
				
				printf ("\n \n SUBTRAÇÃO : \n\n");
				printf ("\n Digite o primeiro número para subtrair : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo número para subtrair : ");
				scanf ("%f", &segundo);
				operacao = primeiro - segundo;
				printf ("\n O resultado da subtração é : %.2f", operacao);			
				
				break;
				
			case 3:
			
				printf ("\n \n MULTIPLICAÇÃO : \n\n");
				printf ("\n Digite o primeiro número para multiplicar : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo número para multiplicar : ");
				scanf ("%f", &segundo);
				operacao = primeiro * segundo;
				printf ("\n O resultado da multiplicação é : %.2f", operacao);
			
				break;	
				
			case 4:
				
				printf ("\n \n DIVISÃO : \n\n");
				printf ("\n Digite o primeiro número para dividir : ");
				scanf ("%f", &primeiro);
				printf ("\n Digite o segundo número para dividir : ");
				scanf ("%f", &segundo);
				
				while(segundo <= 0) {									
				
					printf (" \n O denominador não pode ser igual a zero ! Redigite : ");
					scanf("%f", &segundo);
					
				}
				
				operacao = primeiro / segundo;				
				printf ("\n O resultado da divisão é : %.2f", operacao);
			
				break;			
			
			case 0:
				
				exit(0);
				break;	
			
			default:
				
			printf ("Escolha um número entre 0 e 4 ! \n");
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
