#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	int i=0, maior=0, menor=0, indice_maior=0, indice_menor=0, vetor[6]={0};
				
	printf("\nSistema de gerenciamento de números inteiros.\n ");
	
	for (i = 0; i < 6; i++)	{
		printf ("\nPor favor, digite o %dº valor: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	maior = vetor[0];
	menor = vetor[0];
	for (i = 0; i < 6; i++)	{		
		if (vetor[i] > maior){
			maior = vetor[i];
			indice_maior = i+1;
		}
		if (vetor[i] < menor){
			menor = vetor[i];
			indice_menor = i+1;
		}
	}
	printf("\nVetor:  ");
	for (i = 0; i < 6; i++) {
		printf(" [%i] ", vetor[i]);
	}
	printf ("\n\nO maior número inteiro digitado foi %d e este número foi registrado na %dº posição do vetor.", maior, indice_maior);
	printf ("\n\nO menor número inteiro digitado foi %d e este número foi registrado na %dº posição do vetor.", menor, indice_menor);
	return 0;
}

