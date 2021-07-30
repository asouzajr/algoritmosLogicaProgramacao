#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	
	int cont=0, altura_joao=150, altura_pedro=110, taxa_joao = 2, taxa_pedro = 3;
	
	do {
		altura_joao = altura_joao + taxa_joao;
		altura_pedro = altura_pedro + taxa_pedro;
		cont = cont + 1;
	}	while (altura_pedro<=altura_joao);
	printf("\nSerão necessário %d anos para que Pedro seja mais alto que João.", cont);
	return 0;
}

