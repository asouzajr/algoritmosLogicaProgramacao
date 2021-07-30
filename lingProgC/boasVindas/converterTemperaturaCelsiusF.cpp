#include <stdio.h>

int main ()
{
	//variáveis
	float celsius, fahrenheit;
	
	//inicialiação das variáveis
	celsius = fahrenheit = 0;

	printf("Digite o valor em graus ºC: ");
	scanf("%f", &celsius);
	
	//cálculos
	fahrenheit = (1.8 * celsius) + 32;
	
	printf ("O valor da temperatura em fahrenheit: %.1f", fahrenheit);	

return 0;
}
