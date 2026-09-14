#include"pilha.h"
#include<stdio.h>

Pilha copia_pilha(Pilha p){
    Pilha p_aux = criar();
    Pilha p_copia = criar();

    while(acessar_topo(p)){
        int valor = acessar_topo(p);
        desempilhar(p);
        empilhar(p_aux, valor);
    }

    while(acessar_topo(p_aux)){
        int valor = acessar_topo(p_aux);
        desempilhar(p_aux);
        empilhar(p, valor);
        empilhar(p_copia, valor);
    }
    destruir(p_aux);  
    return p_copia;
}

int main(){
    Pilha p1 = criar();
    empilhar(p1,50);
    empilhar(p1,30);
    empilhar(p1,100);
    Pilha p2 = copia_pilha(p1);
    printf("Topo da pilha p1: %d\n", acessar_topo(p1));
    printf("Topo da pilha p2: %d\n", acessar_topo(p2));
    empilhar(p1, 200);
    desempilhar(p2);
    printf("Topo da pilha p1: %d\n", acessar_topo(p1));
    printf("Topo da pilha p2: %d\n", acessar_topo(p2));

    return 0;
}