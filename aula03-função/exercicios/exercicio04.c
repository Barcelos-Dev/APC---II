// verificador de divisivel

#include <stdio.h>

void divisivel(int n, int d){
    if (n % d == 0){
        printf("0 (eh divisivel)\n");
    }else {
        printf("1 (naum eh divisivel)\n");
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    divisivel(n, 6);

    return 0;
}