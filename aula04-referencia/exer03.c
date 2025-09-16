#include <stdio.h>

void subst (char *str, char busca, char sub){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == busca) str[i] = sub;
        i++;
    }
    printf("%s", str);
}

int main(){
    char *str[12] = {"Coisa doida"};
    char busca = 'c';
    char sub = 'C';

    subst(str[12], busca, sub);

    return 0;
}