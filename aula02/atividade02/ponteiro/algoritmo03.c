// calcular tamanho da string 

#include <stdio.h>

int main(){
    char string[] = "Hello World";
    char *p = string; // ponteiro para a string

    int t = 0;
    while (*(p+t) != '\0'){
        t++;
    }
    printf("Tamanho da string: %d\n", t);
    
    return 0;
}