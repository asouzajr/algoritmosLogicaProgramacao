#include <stdio.h>

int main()
{
	int i = 0;
	
	for(i=1;i<=10;i++) //i++ � o mesmo que i<= i+1 para incrementar
						//se fizer for(i=1;i<=10;i++); essa v�rgula encerra o programa, ir� aparrecer 11 na tela
	{
	printf("%d\n", i);	//\n � para mostrar um resultado em cada linha
						// "%d " � para dar espa�o entre os resultados	
		
	}
	
	
	return 0;
}
