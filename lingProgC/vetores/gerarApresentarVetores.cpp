#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale (LC_ALL, "PORTUGUESE");
	int i, n=1, vetorA[10], vetorB[10], vetorC[20];
		
	printf("\nGerando um vetor a partir da soma dos vetores A e B. ");
	
	printf("\nVetor A: ");
	
	for (i = 0; i < 10; i++)
	{
		printf("\nDigite o %i numero inteiro: ", n);
		n=n+1;
		scanf("%d", &vetorA[i]);
		
	}
	n = 1;
	printf("\nVetor B: ");
		
		for (i = 0; i < 10; i++)
	{
		printf("\nDigite o %i numero inteiro: ", n);
		n=n+1;
		scanf("%d", &vetorB[i]);
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	n = 1;	
			
	printf("\nVetor A: ");
	
	for (i = 0; i <10; i++)
	{
	
		printf("\nO valor da %d posicao corresponde a %d", n, vetorA[i]);
		n=n+1;
	}
	n = 1;
	printf("\nVetor B: ");
	
	for (i = 0; i <10; i++)
	{
	
		printf("\nO valor da %d posicao corresponde a %d", n, vetorB[i]);
		n=n+1;
	}
	n = 1;
	printf("\nVetor C: ");
	
	for (i = 0; i <10; i++)
	{
	
		printf("\nO valor da %d posicao corresponde a %d", n, vetorC[i]);
		n=n+1;
	}
	
	return 0;
}


