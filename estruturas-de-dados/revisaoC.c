#include <stdio.h>
#include <stdlib.h>

void exemplo_stack(){
    int x = 10;

    printf("exemplo_stack() Valor de x: %d Endereco de x: %p\n", x, &x);
}

void alterar_valor(int x){
    x = 20;

    printf("Dentro alterar_valor() Valor de x: %d Endereco de x: %p\n", x, &x);
}

void alterar_ponteiro(int *x){
    *x = 20;

    printf("Dentro alterar_ponteiro() Valor de x: %d Endereco de x: %p\n", *x, x);
}

int* retorno_incorreto(){
    int x = 30;

    printf("Dentro retorno_incorreto() Valor de x: %d Endereco de x: %p\n", x, &x);

    return &x;
}

int* criar_numero(int valor){
    int *p = malloc(sizeof(int));

    *p = valor;

    return p;
}

int main(){
    exemplo_stack();

    int x = 10;

    printf("Antes alterar_valor() Valor de x: %d Endereco de x: %p\n", x, &x);
    alterar_valor(x);
    printf("Depois alterar_valor() Valor de x: %d Endereco de x: %p\n", x, &x);

    alterar_ponteiro(&x);
    printf("Depois alterar_ponteiro() Valor de x: %d Endereco de x: %p\n", x, &x);

    int *p = retorno_incorreto();
    printf("Depois retorno_incorreto() Valor de p: %d Endereco de p: %p\n", *p, p);

    int *q = criar_numero(50);
    printf("Depois criar_numero() Valor de q: %d Endereco de q: %p\n", *q, q);

    free(q);

    return 0;
}