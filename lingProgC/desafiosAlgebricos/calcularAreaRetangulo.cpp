#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	float ai=0, bi=0, hi=0, af=0, lf=0;
	printf("\nSistema para o c�lculo da �rea de um ret�ngulo.\n ");
	printf ("\nPor favor, digite o valor da base do ret�ngulo : ");
	scanf ("%f", &bi);
	printf ("\nPor favor, digite o valor da altura do ret�ngulo : ");
	scanf ("%f", &hi);
	ai = bi*hi;
	af = ai/4;
	lf = sqrt(af);
	printf("\nA �rea do retangulo: %.2f", ai);
	printf ("\n\nA divis�o do ret�ngulo anterior por 4 gera 4 ret�ngulos iguais, sendo o valor dos lados de %.2f e o c�lculo da �rea de %.2f", lf, af);
	return 0;
}

