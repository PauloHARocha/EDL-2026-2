#include<stdlib.h>
#include<stdio.h>
#define MAX 4

struct pilha{ // stack
    int dados[MAX];
    int topo;
};
typedef struct pilha* Pilha;

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

int main(){
    Pilha p = criar();
    empilhar(p, 50);
    empilhar(p, 60);
    empilhar(p, 70);
    empilhar(p, 20);
    printf("Topo da pilha: %d\n", acessar_topo(p));
    desempilhar(p);
    desempilhar(p);
    empilhar(p, 80);
    empilhar(p, 100);
    empilhar(p, 200);
    printf("Topo da pilha: %d\n", acessar_topo(p));
    destruir(p);
}