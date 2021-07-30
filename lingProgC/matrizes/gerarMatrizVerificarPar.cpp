#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "PORTUGUESE");//busca na biblioteca para escrita correta das palabras em portugues
	int i, j, n=1, totalpar, matriz[2][2]; //declaracao de variaveis
	
	printf("Sistema de gera��o de matriz 2x2.\n");//entrada de dados
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("\nDigite o %i numero inteiro: ", n);
			n=n+1;
			scanf("%i", &matriz[i][j]);
		}
	}
	printf("\nMatriz:\n\n");
	totalpar = 0;
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			if (matriz[i][j]%2==0)
			{
				printf ("{%i}", matriz[i][j]);
				totalpar = totalpar + 1;
			}
			else 
			{
				printf ("[%i]", matriz[i][j]);
			}	
		}
		printf("\n");
	}
	printf("\nNo total foram inseridos %i numeros pares.", totalpar);
	return 0;
}
