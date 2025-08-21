// algoritmo 1 - APC-II
// Carlos Eduardo Sousa Barcelos - 2512130003

#include <stdio.h>

int main(){
char string[] = "Hello World";
char *p1 = string;
char *p2 = string;

while (*p1 != '\0') {
    p1++;
} 

int t = p1 - p2;
printf("String: %s\n", string);
printf("Tamanho da string: %i\n", t); 

return 0;
}