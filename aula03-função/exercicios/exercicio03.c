// converter hora, minuto e segundo para segundos totais

#include <stdio.h>

void converter(int hora, int minuto, int segundo){
    int total_seg = hora * 3600 + minuto * 60 + segundo;
    printf("Total de segundos: %d\n", total_seg);
}

int main(){
    int hora, minuto, segundo;
    printf("Digite a hora (hora:minuto:segundo): ");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);
    converter(hora, minuto, segundo);

    return 0;
}
