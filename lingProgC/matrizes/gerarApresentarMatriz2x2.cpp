#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "PORTUGUESE");//busca na biblioteca para escrita correta das palavras em portugues
	int i, j, n=1, matriz[2][2]; //declaracao de variaveis
	
	printf("Sistema de gera��o de matriz 2x2.\n");//entrada de dados
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("\nDigite o %d numero inteiro: ", n);
			n = n+1;
			scanf("%i", &matriz[i][j]);
		}
	}
	printf("\nMatriz:\n\n");
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf ("[%i]", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
