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
    soma += notas[i];
  }
  media = (soma)/N;

  // Impressão
  printf("NOTA MEDIA = %.1f\n", media);

  // Ordenar alafabeticamente
  int maior_1 = 0;
  int maior_2 = 0;
  int maior_3 = 0;

  for(i = 0; i < N; i++)
  {
    if()
  }

  printf("%s %1.f\n",nomes[i],notas[i]);
}