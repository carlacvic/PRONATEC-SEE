#include <stdlib.h>
#include <stdio.h>

int main (void){
	
	int x=0;	
	
	while (x < 10)
	{
		printf ("\n Posicao de x -> %d \n", x);
		
		x=x+1;
		
		if (x == 10)
		printf ("\n");
		
	}
	
	system ("pause");
	
	return 0;
	
}
