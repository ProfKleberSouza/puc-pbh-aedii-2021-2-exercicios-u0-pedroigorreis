// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

// Main
int main (void)
{
	int N;
	int maior;
	int menor;
	
	scanf("%d", &N);
	
	int vetor[N];
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &vetor[i]);
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
	
	printf("MAIOR = %d\n",maior);
	printf("MENOR = %d\n",menor);
}
