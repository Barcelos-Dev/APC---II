//volume da esfera

#include <stdio.h>

double volumeEsfera(double raio) {
    const double pi = 3.14;
    return (4.0 / 3.0) * pi * raio * raio * raio;
}

int main (){
    printf("Digite o raio da esfera: ");
    double raio;
    scanf("%lf", &raio);
    printf("Volume da esfera: %.2f\n", volumeEsfera(raio));


return 0;
}