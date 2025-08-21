// fatorial

#include <stdio.h>

void fatorial (int n){
    int inicio = 1;
    for (int i = n; i >= 1; i--){
        inicio *= i;
    }
    printf("Fatorial de %i eh %i\n", n, inicio);
}

int main(){
    int n;
    printf("Digite o numero para calcular o fatorial: ");
    scanf("%i", &n);
    fatorial(n);

    return 0;
}

