#include <stdio.h>

int main ()
{
	//variáveis
	float largura, comprimento, area, perimetro;
	
	//inicialiação das variáveis
	largura = comprimento = area = perimetro = 0;
	
	printf("Digite o valor da largura da sala : ");
	scanf("%f", &largura);
	
	printf("Digite o valor do comprimento da sala : ");
	scanf("%f", &comprimento);
	
	//cálculos
	area = largura*comprimento;
	perimetro = (largura + comprimento) * 2;
	
	//para pular linha, usa-se \n e coloca-se ponto após %.2f(.)
	printf ("O valor da area e  = %.2f. \nO valor do perimetro e: %.2f.", area, perimetro);	

return 0;
}
