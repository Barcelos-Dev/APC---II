#include <stdio.h>

void imprime (int x, char *s){
    for (int i = 1; i<= x; i++){
        printf("%s", s);
    }
    printf("\n");
}


int main (){
    imprime(1, "B");
    imprime(2, "Casa ");
    imprime(3, "Galo ");

    return 0;
}