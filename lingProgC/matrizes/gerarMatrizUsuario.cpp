#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale (LC_ALL, "PORTUGUESE");
	int i,j, matrizA[2][2];
		
	printf("\nGerando uma matriz A a partir dos valores inseridos pelo usuario.\n ");
	
	
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("\nDigite um valor para a posicao [%d,%d]: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
		
	printf("\nMatriz A:\n\n ");
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("[%d]", matrizA[i][j]);
		}
		printf("\n ");
	}
			
	return 0;
}


