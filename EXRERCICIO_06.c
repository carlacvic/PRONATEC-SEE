#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float qt_minima, qt_maxima, estoque;
	
	printf ("Digite a quantidade minima em estoque : \n");
	
	scanf ("%f", &qt_minima);
	
	printf ("Digite a quantidade maxima em estoque : \n");
	
	scanf ("%f", &qt_maxima);
		
	estoque = (qt_minima + qt_maxima) /2;
	printf ("O estoque medio de pecas e : %.2f \n\n", estoque);	
	
	if (estoque <=100)
	printf ("O estoque precisa ser abastecido ! \n");
	
	else
	printf ("Estoque com quantidade normal ! \n");	
	
	system ("pause");
	
	return 0;
}
