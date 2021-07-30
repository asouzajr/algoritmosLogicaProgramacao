#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale (LC_ALL, "PORTUGUESE");
	int i,j, vetorA[100];
		
	printf("\nGerando um vetor com valores entre 10 e 1000.\n ");
		
	for (i = 1; i < 101; i++)
	{
		vetorA[i] = i*10;
	}
		
	printf("\nVetor A:\n\n ");
	for (i = 1; i < 101; i++)
	{
		printf("[%d]\n", vetorA[i]);
	}
	return 0;
}

