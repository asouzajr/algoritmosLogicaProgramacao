#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	
	int setor=0;
	float nha=0.00, nhb=0.00, vha=65.00, vhb=35.00, vt=15000.00; /*nha corresponde ao número de horas do setor A; nhb corresponde ao número de horas extras do setor B; 
	vha coresponde ao valor de uma hora extra do setor A; *vhb coresponde ao valor de uma hora extra do setor B; vt corresponde ao valor total disponível para o pagamento de horas extras */

	printf("\nSistema de gerenciamento do número de horas extras que as equipes dos setores A e B poderão fazer no mês corrente.\n ");
	printf ("\nPor favor, digite qual setor você deseja informar o número de horas extras, sendo 1 para setor A ou 2 para o setor B: ");
	scanf ("%d", &setor);
	if (setor == 1)	{
		printf ("\nVocê digitou que deseja informar o número de horas extras da equipe do setor A.\n ");
		printf ("\nPor favor, digite o número de horas extras que a equipe do setor A cumprirá no mês corrente: ");
		scanf ("%f", &nha);
		nhb = (vt-vha*nha)/vhb;
		printf("\nA quantidade de horas extras disponível para a equipe do setor B corresponde a %.2f.", nhb);
	}
	if (setor == 2){
		printf ("\nVocê digitou que deseja informar o número de horas extras da equipe do setor B.\n ");
		printf ("\nPor favor, digite o número de horas extras que a equipe do setor B cumprirá no mês corrente: ");
		scanf ("%f", &nhb);
		nha = (vt-vhb*nhb)/vha;
		printf("\nA quantidade de horas extras disponível para a equipe do setor A corresponde a %.2f.", nha);
	}	
	return 0;
}

