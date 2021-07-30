#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	int i=0, j=0, k=0, matriz_A[10][10]={0}, matriz_B[10][10]={0};
	printf("\nGerando matrizes 10x10.\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			matriz_A[i][j] = k+1;
			k = k + 1;
		}
	}
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			matriz_B[i][j] = matriz_A[i][j]*3;
		}
	}
	printf("\nMatriz A 10x10, escrita com valores de 1 a 100:\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			printf(" [%d] ", matriz_A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz B 10x10, escrita a partir da multiplicação dos valores da Matriz A por *3:\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			printf(" [%d] ", matriz_B[i][j]);
		}
		printf("\n");
	}
	return 0;
}


