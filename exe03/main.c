// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>

int main (void)
{
	// Variáveis
	int n;
   
	// Entradas
	scanf("%d",&n);
   
	// Processamento e saída
	if(n % 2 == 0)
   {
      if(n < 0)
      {
         printf("NUMERO PAR NEGATIVO");
      }
      else if(n == 0)
      {
         printf("NUMERO NEUTRO");
      }
      else
      {
         printf("NUMERO PAR POSITIVO");
      }
   }
   else
   {
      if(n < 0)
      {
         printf("NUMERO IMPAR NEGATIVO");
      }
      else
      {
         printf("NUMERO IMPAR POSITIVO");
      }
   }
}
