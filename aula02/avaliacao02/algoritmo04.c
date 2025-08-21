// Algortimo 4 - APC-II
// Carlos Eduardo Sousa Barcelos - 2512130003

#include <stdio.h>

int main (){
    char string1[11] = "Hello";
    char string2[] = "World";

    char *p1 = string1;
    char *p2 = string2;

    while (*p1 != '\0'){
        p1++;
    }
    while (*p2 != '\0'){
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';

    printf("%s\n", string1);

    return 0;
}