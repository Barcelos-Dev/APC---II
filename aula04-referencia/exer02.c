#include <stdio.h>

void imprimirVetor(int n, int vetor[10]){
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 1) vetor[i] = 0;
    }
    
    int i;
    for (i = 0; i<n ; i++){
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }
    
}

int main(){
    int n=10;
    int vetor[10];
    
    imprimirVetor(n, vetor);

    return 0;
}