#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int i, n, resultado;
	srand(time(NULL));
	
	printf ("Digite a quantidade de numeros que deseja jogar: ");
	scanf ("%d", &n);
		
	for(i=1; i<=n; i++) 
	
	{
		resultado =rand()%61; 
		printf("%d ", resultado);
				
	}	
	
		
	return 0;
}
