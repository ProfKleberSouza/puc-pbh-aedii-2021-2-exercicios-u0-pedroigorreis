// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

int main (void)
{
	// Variáveis
	int a;
	int b;
	int c;
	int d;
	
	float media;
	
	// Leitura
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	// Processamento e saída de dados
	media = (a+b+c+d)/4;
	if(media >= 6)
	{
		printf("NOTA = %f (APROVADO)\n", media);
	}
	else
	{
		printf("NOTA = %1.f (REPROVADO)\n", media);
	}
}
