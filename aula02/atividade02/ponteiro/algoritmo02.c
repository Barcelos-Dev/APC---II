// percorrer uma string

#include <stdio.h>

int main(){
    char str[] = "Aula de APC II";
    char *p = str; // ponteiro para a string

    int i = 0;
    while (*(p+i) != '\0'){
        printf("%c", *(p+i));
        i++;
    }
    printf("\n");


    return 0;
}