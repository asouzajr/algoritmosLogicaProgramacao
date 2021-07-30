#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	
	float nha=0.00, nhb=0.00, vha=65.00, vhb=35.00, vt=15000.00; /*nha corresponde ao número de horas do setor A; nhb corresponde ao número de horas extras do setor B; 
	vha coresponde ao valor de uma hora extra do setor A; *vhb coresponde ao valor de uma hora extra do setor B; vt corresponde ao valor total disponível para o pagamento de horas extras */

	printf("\nSistema de gerenciamento do número de horas extras que o funcionário do setor B poderá fazer no mês corrente.\n ");
	printf ("\nPor favor, digite o número de horas extras que o funcionário do setor A irá fazer no mês corrente: ");
	scanf ("%f", &nha);
	nhb = (vt-vha*nha)/vhb;
	printf("\nO funcionário do setor B poderá fazer até %.2f horas extras no mês corrente.", nhb);
	return 0;
}

