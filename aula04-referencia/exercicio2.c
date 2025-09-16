#include<stdio.h>

void dividir (int *x, int *y, float *f){
    if(*y == 0){
        printf("O divisor e 0, não tem como calcular");
    } else {
        *f = *x *1.0/ *y;
    };
    
}
/*
void ex2 (float n1, float n2, float *p){
    if (n2 == 0) return;
    *p = n1/n2;
}
*/

int main(){
    int x = 5;
    int y = 2;
    float f = 0;
    dividir (&x, &y, &f);

    printf("F: %f", f);

    return 0; 
}

