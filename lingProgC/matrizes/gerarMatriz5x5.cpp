#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	int i=1,j=1,k=10, matriz[5][5]={0};
			
	printf("\nGerando uma matriz 5x5 com valores múltiplos de 10, sendo o primeiro valor igual a 100.\n ");
		
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 ; j++)
		{
			 matriz[i][j] = k*10;
			 k=k+1;
		}
	}
		
	printf("\nMatriz 5x5:\n\n ");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf(" [%i] ", matriz[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}

