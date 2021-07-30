#include <stdio.h>

int main()
{
	int i, n, soma=0;
	float media;
	
	for (i=1;i<=13;i++)
	{
		printf("\nDigite o %do numero: ", i);
		scanf("%d", &n);
		soma += n;
	}	
	
	media = soma/13;
	
	printf("\nA media dos numeros e = %.2f", media);
	
	return 0;
}
