#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int i, resultado;
	srand(time(NULL));
	
		
	for(i=1; i<=6; i++) 
	
	{
		resultado =rand()%61; 
		printf("%d ", resultado);
				
	}	
	
		
	return 0;
	
}
