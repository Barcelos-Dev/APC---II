// Exercicio 02 - APC - II
// Carlos Eduardo Sousa Barcelos - 2512130003

#include <stdio.h>

int main(){

    int numero;
    int *p = &numero;

    *p = 5;

    printf("Endereço de *p: %p\n", &p);
    printf("Endereço de numero: %p\n", &numero);
    printf("Valor de numero: %d\n", numero);
    printf("Valor de *p: %d\n", *p);

    return 0;
}