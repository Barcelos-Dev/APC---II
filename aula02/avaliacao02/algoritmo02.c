// Algoritmo 2 - APC-II
// Carlos Eduardo Sousa Barcelos - 2512130003

# include <stdio.h>

int main (){
    char string[] = "Hello World";
    char *p1 = string;

   while (*p1 != '\0') {
        p1++;
    }

    while (p1 != string){
        p1--;
        if (*p1 == 'a' ||*p1 == 'e' ||*p1 == 'i' || *p1 == 'o' || *p1 == 'u'){
        printf("o endereco de p1: %p\n", (void*)p1);
        printf("Ultima vogal: %c\n", *p1);
        break;
        } 
        if (p1 == string && !(*p1 == 'a' || *p1 == 'e' || *p1 == 'i' || *p1 == 'o' || *p1 == 'u')) {
            printf("Null - Nenhuma vogal encontrada na string.\n");
            break;
        }

    }
    return 0;
}