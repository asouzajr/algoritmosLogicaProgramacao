#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "PORTUGUESE");//busca na biblioteca para escrita correta das palabras em portugues
	int i, j, totalpar, matriz[3][3]; //declaracao de variaveis
	
	printf("Sistema de geracao de matriz identidade 3x3.\n");//entrada de dados
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			if (i==j)
			{
				matriz[i][j] = 1;
			}
			else 
			{
				matriz[i][j] = 0;
			}	
		}
	}
	printf("\nMatriz identidade 3x3:\n\n");
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("[%i]", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
