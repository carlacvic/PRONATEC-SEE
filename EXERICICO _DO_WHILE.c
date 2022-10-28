#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int x;
	
	x=0;
	
	do
	{
		printf ("Posicao de x -> %d \n", x);
		x=x+1;
	}
	
	while (x < 10);
	
	
	system ("pause");
	
	return 0;
}
