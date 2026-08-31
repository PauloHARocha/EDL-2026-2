#include<stdlib.h>
#include"pilha.h"

struct pilha{ // stack
    int dados[MAX];
    int topo;
};

Pilha criar(){
    Pilha p = malloc(sizeof(struct pilha));
    if(p != NULL){
        p->topo = 0;
    }
    return p;
}

// push
int empilhar(Pilha p, int valor){
    if(p->topo < MAX){
        p->dados[p->topo] = valor;
        p->topo++;
        return 1;
    }
    return 0;
} 
//peek
int acessar_topo(Pilha p){
    if(p->topo == 0) // piha vazia
        return 0;
    return p->dados[p->topo - 1];
}
// pop
int desempilhar(Pilha p){
    if(p->topo == 0) // piha vazia
        return 0;
    p->topo--;
    return 1;
} 

// free
void destruir(Pilha p) {
    if(p != NULL)
        free(p);
}
