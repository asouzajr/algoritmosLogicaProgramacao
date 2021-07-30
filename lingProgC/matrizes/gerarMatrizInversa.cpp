#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	int i=0, j=0, k=0, n=4, m=9, matriz_A[5][10]={0}, matriz_B[5][10]={0}, matriz_C[5][10]={0};
	printf("\nGerando matrizes 5x10.\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<10; j++){
			matriz_A[i][j] = k+2;
			k = k + 2;
		}
	}
	for (i=0; i<5; i++){
		m = 9;
		for (j=0; j<10; j++){
			
			matriz_B[i][j] = matriz_A[n][m];
			m--;
		}
		n--;
	}
	for (i=0; i<5; i++){
		for (j=0; j<10; j++){
			matriz_C[i][j] = matriz_A[i][j] - matriz_B[i][j];
		}
	}
	printf("\nMatriz A 5x10, escrita com valores múltiplos de 2:\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<10; j++){
			printf(" [%d] ", matriz_A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz B 5x10, escrita a partir da Matriz A, sendo os valores escritos na ordem inversa:\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<10; j++){
			printf(" [%d] ", matriz_B[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz C 5x10, escrita a partir da subtração da Matriz A pela Matriz B:\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<10; j++){
			printf(" [%d] ", matriz_C[i][j]);
		}
		printf("\n");
	}
	return 0;
}


