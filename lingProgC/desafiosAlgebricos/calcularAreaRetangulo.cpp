#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	float ai=0, bi=0, hi=0, af=0, lf=0;
	printf("\nSistema para o cálculo da área de um retângulo.\n ");
	printf ("\nPor favor, digite o valor da base do retângulo : ");
	scanf ("%f", &bi);
	printf ("\nPor favor, digite o valor da altura do retângulo : ");
	scanf ("%f", &hi);
	ai = bi*hi;
	af = ai/4;
	lf = sqrt(af);
	printf("\nA área do retangulo: %.2f", ai);
	printf ("\n\nA divisão do retângulo anterior por 4 gera 4 retângulos iguais, sendo o valor dos lados de %.2f e o cálculo da área de %.2f", lf, af);
	return 0;
}

