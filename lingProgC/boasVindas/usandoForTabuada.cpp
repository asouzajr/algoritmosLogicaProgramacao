#include <stdio.h>

int main()
{
	int linha, coluna;
	
	for(linha = 1; linha<=10; linha++)
	{
		for(coluna = 1; coluna<=6; coluna++)
		{
			if (coluna<6)
			{
				printf("%d x %d = %d\t", linha, coluna, linha*coluna);	
			}		
			else
			{
				printf("\n");
			}
		}
				
	}
	
	
	
	return 0;
}
