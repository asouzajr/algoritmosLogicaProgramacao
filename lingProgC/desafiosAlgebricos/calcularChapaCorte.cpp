#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	int constante_quadro = 400;
	float lado_chapa=0, area_chapa=0, numero_quadro=0;
	printf("\nSistema para o c�lculo do n�mero de quadrados que poder�o ser obtidos a partir da chapa desejada.\n ");
	printf ("\nPor favor, digite o valor do lado da chapa que deseja cortar (em cm) : ");
	scanf ("%f", &lado_chapa);
	if (lado_chapa >= 100){
		area_chapa = lado_chapa*lado_chapa;
		numero_quadro = area_chapa/constante_quadro;
		printf("\nA �rea da chapa em cm: %.2f", area_chapa);
		printf ("\n\nCom esta chapa ser� poss�vel obter %.0f quadros de 20x20 (em cm)", numero_quadro);
	}
	else printf ("\nValor inv�lido! Tente novamente!");
	return 0;
}

