#include <stdio.h>

int main()

{
	int numero = 1;
	char letra = 'a';
		
	
	for(letra='a';letra<='z';letra++)  //Pode usar a letra ou número como parâmetro
	
	{
			
		printf ("%c%d ", letra, numero);
		numero++;
						
	}	
	
		
	return 0;
}
