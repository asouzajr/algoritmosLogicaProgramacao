#include <stdio.h>

int main ()
{
	//vari�veis
	float P1, P2, media;
	
	//inicialia��o das vari�veis
	P1 = P2 = media = 0;
	
	printf("Digite o valor da nota da P1 : ");
	scanf("%f", &P1);
	
	printf("Digite o valor da nota da P2 : ");
	scanf("%f", &P2);
	
	//c�lculos
	media = (P1+P2) /2; 
	
	printf("A media e  = %.1f", media);	

return 0;
}
