#include <stdio.h>

int main ()
{
	//vari�veis
	float largura, comprimento, area, perimetro;
	
	//inicialia��o das vari�veis
	largura = comprimento = area = perimetro = 0;
	
	printf("Digite o valor da largura da sala : ");
	scanf("%f", &largura);
	
	printf("Digite o valor do comprimento da sala : ");
	scanf("%f", &comprimento);
	
	//c�lculos
	area = largura*comprimento;
	perimetro = (largura + comprimento) * 2;
	
	//para pular linha, usa-se \n e coloca-se ponto ap�s %.2f(.)
	printf ("O valor da area e  = %.2f. \nO valor do perimetro e: %.2f.", area, perimetro);	

return 0;
}
