
// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Main
int main (void)
{
	// Variáveis
	int x;
	
	// Processamento e saída de dados
	do
	{
		scanf("%d", &x);
		if(x > 0)
		{
			printf("POSITIVO\n");
		}
		else if (x == 0)
		{
      exit(1);		
    }
		else
		{
			printf("NEGATIVO\n");
		}
	}
	while(x != 0);
}
