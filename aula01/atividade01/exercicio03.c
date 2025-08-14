// Exercicio 03 - APC - II
// Carlos Eduardo Sousa Barcelos - 2512130003

#include <stdio.h>

int main (){
    int n1 = 3, n2 = 5;
    int *p1 = &n1, *p2 = &n2;
    int c = *p1;

    *p1 = *p2;
    *p2 = c;

    printf("n1: %d, n2: %d\n", n1, n2);
    return 0;
}