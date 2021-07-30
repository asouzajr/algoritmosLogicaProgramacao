#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "PORTUGUESE");//busca na biblioteca para escrita correta das palavras em portugues
	int i, j, n=1, sdp, psln, maior, totalpar, matriz[4][4]; //declaracao de variaveis
	
	printf("Sistema de geracao de matriz 4x4.\n");//entrada de dados
	sdp = 0;
	psln = 1;
	
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("\nDigite o %d numero inteiro: ", n);
			n=n+1;
			scanf("%i", &matriz[i][j]);
			if (i==j)
			{
				sdp = sdp + matriz[i][j];
			}
			
			if (i==1)
			{
				psln = psln * matriz[i][j];
			}
			if (j==2)
			{
				maior = matriz[i][j];
				if (matriz[i][j]>maior)
				{
				maior = matriz[i][j];
				}
			}
		}
	}
	
printf("\nMatriz 4x4:\n\n");
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf ("[%i]", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\nA soma dos valores da diagonal principal e igual a %i.", sdp);
	printf("\nO produto dos valores da segunda linha e igual a %i.", psln);
	printf("\nO maior n�mero da terceira coluna e igual a %i.", maior);
	return 0;
}
