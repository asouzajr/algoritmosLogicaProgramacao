#include <stdio.h>

int main()
{
	int i, n, result=1;
	
	printf("Digite o valor a ser calculado o fatorial: ");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--)
	{
		result *= i;
	}
	
	printf("\nFatorial de %d = %d ", n, result);
	
	return 0;
}
