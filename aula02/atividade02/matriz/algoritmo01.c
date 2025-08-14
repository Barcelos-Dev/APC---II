// tirar a média dos números pares da matriz

#include <stdio.h>

int main(){
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    /*int *p = (int *)num;
    for (int i = 0; i < 3*4; i++){
        printf("num[%d]: %d\n", i, *(p+i));
    }*/
    printf("\n");

    int soma = 0;
    int cont = 0;
    int (*pnum)[4] = num;
    for (int lin = 0; lin < 3; lin++){
        for (int col = 0; col < 4; col++){
            printf("num[%d][%d]: %d\n", lin, col, *(*(pnum+lin)+col));
            if (*(*(pnum+lin)+col) % 2 == 0){
                soma = soma + *(*(pnum+lin)+col);
                cont++;
            }
        }
    }

    int media = soma / cont;
    printf("Soma dos numeros pares: %d\n", soma);
    printf("Quantidade de numeros pares: %d\n", cont);
    printf("Media dos numeros pares: %d\n", media);

    return 0;
}