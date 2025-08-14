// percorrer um vetor de inteiros

#include <stdio.h>

int main(){
    char vet[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *p = vet; // ponteiro para o vetor
    for (int i = 0; i < 9; i++){
        printf("vet[%i]: %d\n", i, *(p+i));
    }

    return 0;
}