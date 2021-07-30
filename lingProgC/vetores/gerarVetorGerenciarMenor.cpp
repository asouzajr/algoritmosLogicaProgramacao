#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	int i=1,j=1, menor=0, vetor[1][5]={0};
	printf("\nSistema de gerenciamento de numeros inteiros.\n ");
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 5 ; j++)
		{
			printf ("\nPor favor, digite o %d numero inteiro: ", j+1);
			scanf ("%d", &vetor[i][j]);
			}
		
	}
	menor = vetor[0][0];
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 5 ; j++)
		{
			if (vetor[i][j] < menor)
			 	menor = vetor[i][j];
		}
	}	
	printf("\nResultado da operacao relacional:\n ");
	printf("\nOs numeros digitados foram:");
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf(" [%d] ", vetor[i][j]);
		}
		printf("\n");
	}
	printf ("\nO menor numero digitado foi: %d ", menor);
	return 0;
}

