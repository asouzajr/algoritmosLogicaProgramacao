#include <stdio.h>
#include <locale.h>

int velocidade_corte (int tipoAco);
float velocidade_fuso (int velocidadeCorte, float diametroFresa);

int main()

{
	setlocale (LC_ALL, "PORTUGUESE");
	int tipoAco, velocidadeCorte;
	float diametroFresa,  velocidadeFuso;
	printf("\nCalculo da velocidade de fuso em rpm. ");
	printf("\n\nPor favor, digite o tipo de aço desejado (em kgf/mm2): ");
	scanf("%d", &tipoAco);
	printf("\nPor favor, digite o diâmetro da fresa em (em mm): ");
	scanf("%f", &diametroFresa);
	velocidadeCorte = velocidade_corte (tipoAco);
	velocidadeFuso = velocidade_fuso (velocidadeCorte, diametroFresa);
	printf("\nA velocidade do fuso corresponde a %.2f rpm.", velocidadeFuso);
	return 0;
}

int velocidade_corte (int tipoAco)
{
	int vcorte;
	if (tipoAco <= 60)
		vcorte = 22;

		else if (tipoAco <= 90)
			vcorte = 20;
		
			else if (tipoAco <= 110)
				vcorte = 18;
			
				else if (tipoAco > 110)
					vcorte = 14;
	return vcorte;
}

float velocidade_fuso (int velocidadeCorte, float diametroFresa)
{
	float vfuso;
	vfuso = (float) (1000 * velocidadeCorte)/(3.14 * diametroFresa);
	return vfuso;
}
