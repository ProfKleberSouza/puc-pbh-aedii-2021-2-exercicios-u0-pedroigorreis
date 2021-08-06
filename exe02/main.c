// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

int main (void)
{
	// Variáveis
	int T;
	int V;
	int R;
   int L;
   int D;
	
	// Entradas
	scanf("%d %d %d",&T,&V,&R);
	
	// Processamento
	D = T*V;
   L = D/R;
	
	//Saída
	printf("R = %d\n",R);
   printf("V = %d\n",V);
   printf("T = %d\n",T);
   printf("D = %d\n",D);
   printf("L = %d\n",L);
}
