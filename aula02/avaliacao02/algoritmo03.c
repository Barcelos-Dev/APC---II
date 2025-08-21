// Algoritmo 3 - APC-II
// Carlos Eduardo Sousa Barcelos - 2512130003

#include <stdio.h>
#include <string.h>

int main (){
    char string[] = "Hello World";
    char *p1 = string;
    char *p2 = string + strlen(string) - 1;


    while (p1 < p2) {
        int guardar = *p1;
        *p1 = *p2;
        *p2 = guardar;
        p1++;
        p2--;
    }

    printf("String invertida: %s\n", string);

    return 0;
}