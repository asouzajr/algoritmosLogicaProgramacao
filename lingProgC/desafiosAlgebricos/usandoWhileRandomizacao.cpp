#include <stdio.h>
#include <stdlib.h>

int main()


{
	int i = 1;	
	
	while (i<=5)
	
	{
		//Gerar um número aleatório
		printf ("%d ", rand()%101);
		
		i++;
		
		}	

	
	return 0;
}
