#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	int i=1,j=1;
	float soma=0, media= 0, vetor[1][3]={0};
	printf("\nSistema de gerenciamento de notas.\n ");
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 3 ; j++)
		{
			 printf ("\nPor favor, digite a %d nota: ", j+1);
			 scanf ("%f", &vetor[i][j]);
			 soma = soma + vetor[i][j];
		}
	}
	media = soma/3;	
	printf("\nBoletim escolar:\n ");
	printf("\nNotas:");
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" [%.2f] ", vetor[i][j]);
		}
		printf("\n");
	}
	printf ("\nMédia: %.2f ", media);
	return 0;
}

