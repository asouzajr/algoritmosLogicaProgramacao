#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	
	float nha=0.00, nhb=0.00, vha=65.00, vhb=35.00, vt=15000.00; /*nha corresponde ao n�mero de horas do setor A; nhb corresponde ao n�mero de horas extras do setor B; 
	vha coresponde ao valor de uma hora extra do setor A; *vhb coresponde ao valor de uma hora extra do setor B; vt corresponde ao valor total dispon�vel para o pagamento de horas extras */

	printf("\nSistema de gerenciamento do n�mero de horas extras que o funcion�rio do setor B poder� fazer no m�s corrente.\n ");
	printf ("\nPor favor, digite o n�mero de horas extras que o funcion�rio do setor A ir� fazer no m�s corrente: ");
	scanf ("%f", &nha);
	nhb = (vt-vha*nha)/vhb;
	printf("\nO funcion�rio do setor B poder� fazer at� %.2f horas extras no m�s corrente.", nhb);
	return 0;
}

