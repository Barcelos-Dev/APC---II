#include <stdio.h>

typedef unsigned int uint;
typedef struct pessoa Pessoa;

struct pessoa
{
    char nome[100];
    int idade;
};

void preencher(uint n, Pessoa pessoas[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome da pessoa [%d] : ", i + 1);
        scanf("%99[^\n]%*c", pessoas[i].nome);
        printf("Digite a idade: ");
        scanf("%d%*c", &pessoas[i].idade);
        printf("\n");
    }
}
void exibir(uint n, Pessoa pessoas[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Pessoa[%d]: nome: %s, idade: %d\n", i + 1, pessoas[i].nome, pessoas[i].idade);
    }
};

int main()
{
    int n;
    printf("Digite o numero de pessoas: ");
    scanf("%d%*c", &n);
    printf("\n");

    Pessoa pessoas[n];

    printf("Cadastro de %d pessoas!\n", n);
    preencher(n, pessoas);
    exibir(n, pessoas);

    return 0;
}