#include <stdio.h>

void imprime (int x){
    for (int i = 1; i<= x; i++){
        printf("*");
    }
    printf("\n");
}


int main (){
    imprime(1);
    imprime(2);
    imprime(3);

    return 0;
}