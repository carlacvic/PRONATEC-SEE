#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int x;
	
	do{
		
		printf ("\n Posicao de x -> %d \n", x);
	
		x=x+1;
		
		if (x == 10)
		printf ("\n");
	}	
	
	while(x<10);
	
	system ("pause");
	
	return 0;
}

