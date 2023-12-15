#include <stdio.h>
#include <stdlib.h>

#define b 5
#define c 2

struct aluno
{
  char nome[200];
  char nascimento[200];
  float nota[2];
  float media;
};

float calcularmedia(struct aluno a[], int i)
{

  int j;
  int soma = 0;
  float media;

  for (j = 0; j < b; j++)
  {
    soma += a[i].nota[j];
    fflush(stdin);
  }
  media = soma / (float)c;

  return media;
}

void mostrar(float media)
{

  if (media >= 7)
  {
    printf("aprovado\n");
  }
  else
  {
    printf("reprovado\n");
  }
}

int main()
{

  struct aluno a[b];
  int i, j;
  int soma = 0;

  for (i = 0; i < b; i++)
  {

    printf("digite o nome do aluno: ");
    gets(a[i].nome);

    printf("digite o ano de nascimento do aluno: ");
    gets(a[i].nascimento);

    for (j = 0; j < c; j++)
    {
      printf("digite a %d nota: ", j + 1);
      scanf("%f", &a[i].nota[j]);
      printf("");
      soma += a[i].nota[j];
    }

    a[i].media = 0;
    a[i].media = calcularmedia(a, i);
    fflush(stdin);
    printf("\n");
  }

  system("cls|| clear");
  for (i = 0; i < b; i++)
  {
    printf("nome: %s\n", a[i].nome);
    printf("nascimento: %s\n", a[i].nascimento);
    printf("media: %.1f\n", a[i].media);
    mostrar(a[i].media);
    printf("\n");
  }
  return 0;
}