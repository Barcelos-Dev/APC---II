#include <stdio.h>

struct pessoa {
    char nome [100];
    int idade;
};


int main (){
    struct pessoa pessoas[3];

    for(int i = 0; i < 3; i++){
        printf("Digite o nome: ");
        scanf("%99[^\n]%*c", pessoas[i].nome);
        printf("Digite a idade: ");
        scanf("%d%*c", &pessoas[i].idade);
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 3; i++){
        printf("nome: %s, idade: %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    return 0;
}

//O %*c elimina - limpa o '\n'