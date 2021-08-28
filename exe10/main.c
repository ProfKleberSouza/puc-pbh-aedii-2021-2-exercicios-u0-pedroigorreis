// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

// Main
int main (void)
{
	// Variáveis
	int n[10];
	
	// Leitura
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
	}
	
	// Impressão
	for(int i = 9; i > 0; i--)
	{
		printf("%d\n", n[i]);
	}

	// Fim
	return 0;
}
