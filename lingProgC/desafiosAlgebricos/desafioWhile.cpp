#include <stdio.h>

int main()

{
	int numero = 1;
	char letra = 'a';
		
	
	while(numero<=26) //Pode usar a letra ou número como parâmetro
	
	{
			
		printf ("%c%d ", letra, numero);
		numero++;
		letra++;
						
	}	
	
		
	return 0;
}
