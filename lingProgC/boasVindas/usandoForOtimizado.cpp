#include <stdio.h>

int main()
{
	int i, resultado; // vari�veis
	
	for(i=1; i<=10; i++) // la�o de repeti��o
	{ 
	printf("2 x %d = %d\n", i, 2*i);  // parte matem�tica - coloca-se no printf a matem�tica da vari�vel "resultado" 
									  // em vez de colocar numa linha antes a f�rmula (resultado = 2*i);
								      // e chamar a f�rmnula como: printf("2 x %d = %d\n", i, resultado);
				
	}	
	
	return 0;
}
