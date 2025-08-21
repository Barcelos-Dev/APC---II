// data por extenso

#include <stdio.h>

void dataporextenso(int dia, int mes, int ano){
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", 
                 "Maio", "Junho", "Julho", "Agosto", 
                 "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("%i de %s de %i\n", dia, meses[mes -1], ano);
}

int main(){
    int dia, mes, ano;
    printf("Digite a data (dia/mes/ano): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    dataporextenso(dia, mes, ano);


    return 0;
}