// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

int main (void)
{
	// Variáveis
	int x, y, z;
	
	// Leitura
	scanf("%d %d %d",&x,&y,&z);
	
	// Processamento e saída
	if(x < y + z || y < x + z || z < x + y)
	{
		if(x == y == z)
		{
			printf("TRIANGULO EQUILÁTERO\n");
		}
		else if(x == y || y == z || z == x)
		{
			printf("TRIANGULO ISÓSCELES\n");
		}
		else
		{
			printf("TRIANGULO ESCALENO\n");
		}
	}
	else
	{
		printf("OS LADOS NAO FORMAM UM TRIANGULO\n");
	}
}
