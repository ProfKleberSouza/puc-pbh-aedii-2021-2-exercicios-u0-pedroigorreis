// +-------------------------------+----------------+
// | U0 - Nivelamento - Exercícios | @pedroigorreis |
// +-------------------------------+----------------+

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Limites
#define MAX 30

// Main
int main (void)
{
  // Quantidade de leituras
  int N;
  int i;
  scanf("%d", &N);

  // Vetores
  float notas[N];
  char nomes[N][MAX];

  // Leituras
  for(i = 0; i < N; i++)
  {
    scanf("%s %f", nomes[i], &notas[i]);
  }

  // Média
  float soma = 0;
  float media = 0;
  for(int i = 0; i < N; i++)
  {
    soma = notas[i] + soma;
  }
  media = (soma)/N;

  // Impressão
  printf("NOTA MEDIA = %.1f\n", media);

  // Ordenar alafabeticamente
  for(i = 0; i < N; i++)
  {
    printf("%s %1.f\n",nomes[i],notas[i]);
  }
}