#include <stdio.h>

int main()
{
	int i = 0;
	
	for(i=1;i<=10;i++) //i++ é o mesmo que i<= i+1 para incrementar
						//se fizer for(i=1;i<=10;i++); essa vírgula encerra o programa, irá aparrecer 11 na tela
	{
	printf("%d\n", i);	//\n é para mostrar um resultado em cada linha
						// "%d " é para dar espaço entre os resultados	
		
	}
	
	
	return 0;
}
