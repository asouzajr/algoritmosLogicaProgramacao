#include <stdio.h>

int main ()
{
	float celsius, fahrenheit;

	printf("Digite o valor em graus ºC: ");
	scanf("%f", &celsius);
	
	fahrenheit = (1,8 * celsius) + 32;
	
	printf ("O valor em fahrenheit = %.1f", fahrenheit);	

return 0;
}
