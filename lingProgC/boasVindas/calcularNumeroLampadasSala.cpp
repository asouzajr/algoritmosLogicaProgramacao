#include <stdio.h>

int main ()
{
	//variáveis
	float largura, comprimento, area, perimetro, lampadas;
	
	//inicialiação das variáveis
	largura = comprimento = area = perimetro = lampadas = 0;
	
	printf("Digite o valor da largura da sala : ");
	scanf("%f", &largura);
	
	printf("Digite o valor do comprimento da sala : ");
	scanf("%f", &comprimento);
	
	//cálculos
	area = largura*comprimento;
	perimetro = (largura + comprimento) * 2;
	lampadas = area / 6;
	
	printf ("O numero de lampadas e  = %.0f", lampadas);	

return 0;
}
