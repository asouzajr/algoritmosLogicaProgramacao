#include <stdio.h>

int main ()
{
	//vari�veis
	float celsius, fahrenheit;
	
	//inicialia��o das vari�veis
	celsius = fahrenheit = 0;

	printf("Digite o valor em graus �C: ");
	scanf("%f", &celsius);
	
	//c�lculos
	fahrenheit = (1.8 * celsius) + 32;
	
	printf ("O valor da temperatura em fahrenheit: %.1f", fahrenheit);	

return 0;
}
