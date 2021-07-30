#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	int i=0, j=0, k=0, l=1, matriz_A[4][5]={0}, matriz_B[4][5]={0}, matriz_C[4][5]={0};
	printf("\nGerando matrizes 4x5.\n\n");
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			matriz_A[i][j] = k+1;
			k = k+2;
		}
	}
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			matriz_B[i][j] = l+1;
			l = l+2;
			matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
		}
	}
	printf("\nMatriz A 4x5, escrita com valores ímpares iniciando em 1:\n\n");
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			printf(" [%d] ", matriz_A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz B 4x5, escrita com valores pares iniciando em 2:\n\n");
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			printf(" [%d] ", matriz_B[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz C 4x5, escrita a partir da soma dos elementos correspondentes da Matriz A com a Matriz B:\n\n");
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			printf(" [%d] ", matriz_C[i][j]);
		}
		printf("\n");
	}
	return 0;
}


