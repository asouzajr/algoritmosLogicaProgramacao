#include <stdio.h>

int main ()
{
	//vari�veis
	float largura, comprimento, area, perimetro, lampadas;
	
	//inicialia��o das vari�veis
	largura = comprimento = area = perimetro = lampadas = 0;
	
	printf("Digite o valor da largura da sala : ");
	scanf("%f", &largura);
	
	printf("Digite o valor do comprimento da sala : ");
	scanf("%f", &comprimento);
	
	//c�lculos
	area = largura*comprimento;
	perimetro = (largura + comprimento) * 2;
	lampadas = area / 6;
	
	printf ("O numero de lampadas e  = %.0f", lampadas);	

return 0;
}
