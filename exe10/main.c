// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

// Ordenação inversa
void bubbleSort(int vetor[], int n)
{
	int k;
	int j;
	int aux;
	
	for(k = 1; k < n; k++)
	{
		for(j = 0; j < n - 1;j++)
		{
			if(vetor[j] < vetor[j+1])
			{
				aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
			}
		}
	}
}

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
	
	// Ordenação inversa
	bubbleSort(n, 10);
	
	// Impressão
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", n[i]);
	}
	
	// Fim
	return 0;
}
