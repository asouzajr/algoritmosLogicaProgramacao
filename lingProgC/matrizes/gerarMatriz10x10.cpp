#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int p[10][10], i, j, v=2;
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
		
		p[i][j]=v;
		printf("Valor na posicao: linha %d e coluna %d = %d", i+1, j+1, p[i][j]);
		v=v+2;
		printf("\n");
		}
	}
    return 0;
}