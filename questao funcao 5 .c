#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 4

struct Funcionario
{
    char nome[500];
    char cargo[500];
    float salario;
};

float mediasalario(struct Funcionario funcionarios[], int n, const char *buscar)
{
    float soma = 0;
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(funcionarios[i].cargo, buscar) == 0)
        {
            soma += funcionarios[i].salario;
            contador++;
        }
    }

    if (contador > 0)
    {
        return soma / contador;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct Funcionario funcionarios[m];
    float media;
    char *buscar = "programador";

    for (int i = 0; i < m; i++)
    {
        printf("\nfuncionario %d:\n", i + 1);
        printf("nome: ");
        scanf("%s", funcionarios[i].nome);
        printf("cargo: ");
        scanf("%s", funcionarios[i].cargo);
        printf("salario: ");
        scanf("%f", &funcionarios[i].salario);
    }

    media = mediasalario(funcionarios, m, buscar);

    if (media != 0)
    {
        printf("\nmedia salarial dos %s: %.2f\n", buscar, media);
    }
    else
    {
        printf("\nnao ha funcionarios com o cargo de %s.\n", buscar);
    }

    return 0;
}
