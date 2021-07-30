#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()


{
	int i = 1;	
	srand(time(NULL)); //números aleatórios de verdade
	
	while (i<=5)
	
	{
	
		printf ("%d ", rand()%101);		
		i++;
		
		}	
	
	return 0;
}
