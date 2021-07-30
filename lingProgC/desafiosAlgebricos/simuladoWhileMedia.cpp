#include <stdio.h>

int main()

{
	int n = 0, n1 = 1, n2 = 1;
		
			
	while(n1<=13)
	
	{
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &n2);
		n = n+n2;
							
		n1 = n1+ 1;
						
	}	
	
	printf ("%d ", n/13);
	
		
	return 0;
}
