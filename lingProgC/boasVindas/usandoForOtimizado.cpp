#include <stdio.h>

int main()
{
	int i, resultado; // variáveis
	
	for(i=1; i<=10; i++) // laço de repetição
	{ 
	printf("2 x %d = %d\n", i, 2*i);  // parte matemática - coloca-se no printf a matemática da variável "resultado" 
									  // em vez de colocar numa linha antes a fórmula (resultado = 2*i);
								      // e chamar a fórmnula como: printf("2 x %d = %d\n", i, resultado);
				
	}	
	
	return 0;
}
