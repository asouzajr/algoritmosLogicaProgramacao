#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "PORTUGUESE");
	int i=1,j=1, mes_maiortemp = 0, mes_menortemp = 0;
	float menor=0.00, maior=0.00, vetor[1][12]={0.00};
			
	printf("\nSistema de gerenciamento de temperatura.\n ");
	for (i = 0; i < 1; i++)	{
		for (j = 0; j < 12 ; j++){
			printf ("\nPor favor, digite a temperatura média do %dº mês: ", j+1);
			scanf ("%f", &vetor[i][j]);
		}
	}
	
	maior = vetor[0][0];
	for (i = 0; i < 1; i++)	{
		for (j = 0; j < 12 ; j++){
			if (vetor[i][j] > maior){
				maior = vetor[i][j];
				mes_maiortemp = j+1;
			}
		}
	printf ("\nA maior temperatura registrada foi de %.2f oC e ocorreu no %dº mês.", maior, mes_maiortemp);
	}
												
	menor = vetor[0][0];
	for (i = 0; i < 1; i++)	{
		for (j = 0; j < 12 ; j++){
			if (vetor[i][j] < menor){	
				menor = vetor[i][j];
			 	mes_menortemp = j+1;
			}
		}
	printf ("\nA menor temperatura registrada foi de %.2f oC e ocorreu no %dº mês.", menor, mes_menortemp);
	}
	
	return 0;
}

