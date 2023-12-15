#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 3

struct agenda // nome autoexplicativo
{
  char nome[200];
  char numero[200];
  char email[200];
};

void verify(struct agenda a[], char *procurar) // verifica o numero com o nome
{
  // int verificacao = 0;
  int i;

  for (i = 0; i < m; i++)
  {
    if (strcmp(a[i].nome, procurar) == 0)
    {
      printf("\nnome: %s\nnumero: %s\nemail: %s\n", procurar, a[i].numero, a[i].email);
      return;
    }
  }
  printf("contato nao encontrado\n");
}

int main()
{

  struct agenda a[m];
  int i;
  char procurar[200];

  for (i = 0; i < m; i++)
  {
    printf("digite o %d nome: ", i + 1);
    gets(a[i].nome);

    printf("digite o %d numero: ", i + 1);
    gets(a[i].numero);

    printf("digite o %d email: ", i + 1);
    gets(a[i].email);

    printf("\n");
  }

  printf("\n");
  printf("pesquisar nome: ");
  gets(procurar);
  verify(a, procurar);

  return 0;
}