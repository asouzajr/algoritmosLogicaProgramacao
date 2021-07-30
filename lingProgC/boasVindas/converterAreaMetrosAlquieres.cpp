#include <stdio.h>

int main ()
{
	//vari�veis
	float largura, comprimento, area, ap, am;
	
	//inicialia��o das vari�veis
	largura = comprimento = area = ap = am = 0;
	
	printf("Digite o valor em metros da largura da area : ");
	scanf("%f", &largura);
	
	printf("Digite o valor em metros do comprimento da area : ");
	scanf("%f", &comprimento);
	
	//c�lculos
	area = largura*comprimento;
	ap = area/24200;
	am = area/48400;
	
	printf ("O valor da area em alqueire paulista e  = %.2f. \ne em alqueire mineiro o valor da area e: %.2f.", ap, am);	

return 0;
}
