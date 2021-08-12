// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	// Variáveis
	int menor = 0;
	int maior = 0;
	int vetor* = (int*)malloc(sizeof(int)*3);
	
	// Entrada
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", vetor[i]);
		if(i == 0)
		{
			maior = vetor[i];
			menor = vetor[i];
		}
		
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else
		{
			if(vetor[i] < menor)
			{
				menor = vetor[i];
			}
		}
	}
	
	// Saída
	printf("MAIOR = %d", &maior);
	printf("MENOR = %d", &menor);
}
