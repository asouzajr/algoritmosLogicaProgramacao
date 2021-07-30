#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	
	int i=0, j=0, k=0, matrizA[10][10]={0}, matrizT[10][10]={0}, matrizI[10][10]={0};//matrizA é uma matriz com número ímpares iniciando em 1;matrizB é a tansposta da matrizA e a matrizC é a matriz identidade da matrizA.
	
	printf("\nGerando matrizes quadradas 10x10.\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			matrizA[i][j] = k+1;
			k = k+2;
			if (i == j){
				matrizI[i][j] = 1;
			}
			else{
				matrizI[i][j] = 0;
			}
		}
	}
	
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
		if (i == j){
			matrizT[i][j] = matrizA[i][j];
		}
		if (i < j){
			matrizT[i][j] = matrizA[j][i];
		}
		if (i > j){
			matrizT[i][j] = matrizA[j][i];
		}
		}
	}	
	
	printf("\nMatriz A 10x10, escrita com valores ímpares iniciando em 1:\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			printf(" %d\t ", matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz transposta de A:\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			printf(" %d\t", matrizT[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz identidade de A:\n\n");
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			printf(" %d\t ", matrizI[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


