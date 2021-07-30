#include <stdio.h>

int main ()
{
	//variáveis
	float largura, comprimento, area, perimetro, tomadas;
	
	//inicialiação das variáveis
	largura = comprimento = area = perimetro = tomadas = 0;
	
	printf("Digite o valor da largura da sala : ");
	scanf("%f", &largura);
	
	printf("Digite o valor do comprimento da sala : ");
	scanf("%f", &comprimento);
	
	//cálculos
	area = largura*comprimento;
	perimetro = (largura + comprimento) * 2;
	tomadas = perimetro / 5;
	
	printf ("O numero de tomadas e  = %.0f", tomadas);	

return 0;
}
