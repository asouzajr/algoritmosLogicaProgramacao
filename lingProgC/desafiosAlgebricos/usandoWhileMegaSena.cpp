#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int i = 1;	
	srand(time(NULL));
	
	while (i<=6)
	
	{
	
		printf ("%d ", rand()%61);
		i++;		
			
	}	
		
	return 0;
	
}
