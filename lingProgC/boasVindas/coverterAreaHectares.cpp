#include <stdio.h>

int main ()
{
	//vari�veis
	float largura, comprimento, area, hectares;
	
	//inicialia��o das vari�veis
	largura = comprimento = area = hectares = 0;
	
	printf("Digite o valor em metros da largura da area : ");
	scanf("%f", &largura);
	
	printf("Digite o valor em metros do comprimento da area : ");
	scanf("%f", &comprimento);
	
	//c�lculos
	area = largura*comprimento;
	hectares = area/10000;
	
	printf ("O valor da area em hectares e  = %.2f", hectares);	

return 0;
}
