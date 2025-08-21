// função

#include <stdio.h>

int main(){

    int f(int x) {return 2*x;}
    f(5);    

    return 0;
}

// função executa uma tarefa e retorna um resultado

// procedimento executa uma tarefa sem retornar um resultado

// void é a ausencia de tipo


/*
#include <stdio.h>

void say_hello(char *str){
    printf("Hello %s\n", str);
}

int main()
{
    char *nome[] = "Carlos";}
    say_hello(nome);
    say_hello(&nome[3]); // &nome[3] é o endereço do quarto caractere do vetor nome
    printf("&nome: %p, (c: %c) nome: %s\n", nome, *nome, nome);
    printf("say_hello: %p\n", say_hello);

    void (*p_func)(char *) = say_hello;
    printf("p_func: %p\n", p_func);
    p_func(nome); 

    return 0;
*/