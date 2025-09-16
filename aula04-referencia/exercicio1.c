#include <stdio.h>

void troca(int *y, int *x)
{
    int aux;
    aux = *y;
    *y = *x;
    *x = aux;
}

int main()
{
    int y = 10;
    int x = 5;
    troca(&y, &x);

    printf(" y= %d, x= %d", y, x);

    return 0;
}