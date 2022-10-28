#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*
	As variáveis que aqui estão comporão a struct.
	int numero;
	float nota;
	char nome[40];*/
	
	struct ficha_aluno{
		
		int numero;
		float nota;
		char nome[40];		
	};
	
	struct ficha_aluno aluno;
	
	printf ("\n -------------------- Cadastro do aluno ---------------------- \n\n");
	
	printf ("Nome do aluno : ");
	fgets(aluno.nome,40,stdin);
	
	printf ("\n\n");
	
	printf ("Nome do aluno : ");
	scanf("%d", &aluno.numero);
	
	printf ("\n\n");
	
	printf ("Informe a nota do aluno : ");
	scanf("%f", &aluno.nota);
	
	printf ("\n\n");
	
	printf ("--------------------- Dados informados ----------------------- \n\n");
	
	printf ("Nome .................... :  %s", aluno.nome);
	
	printf ("\n\nNúmero............... :  %d", aluno.numero);
	
	printf ("\n\nNota................. :  %.2f", aluno.nota);	
	
	printf ("\n\n");
	
	system ("pause");
	
	return 0;
}
