#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale (LC_ALL, "PORTUGUESE");
	int i=1,j=1,k=1, matriz[10][10]={0};
			
	printf("\nGerando uma matriz 10x10 com valores entre 10 e 1000, em multiplos de 10.\n ");
		
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			 matriz[i][j] = k*10;
			 k=k+1;
		}
	}
		
	printf("\nMatriz 10x10:\n\n ");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf(" [%i] ", matriz[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}


