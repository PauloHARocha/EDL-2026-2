#include<stdlib.h>

struct elem{
    int valor;
    Elem* prox;
};
typedef struct elem Elem;

struct lista{
    int qtd;
    Elem* inicio;
};
typedef struct lista* Lista;

Lista criar_lista(Lista li){
    Lista li = malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
        li->inicio = NULL;
    }
    return li;
}

int inserir_inicio(Lista li, int valor_inserir){
    Elem* no = malloc(sizeof(Elem));
    if(no != NULL){
        no->valor = valor_inserir;
        no->prox = li->inicio;
        li->inicio = no;
        li->qtd++;
        return 1;
    } 
    return 0;
}

int inserir_final(Lista li, int valor_inserir){
    Elem* no = malloc(sizeof(Elem));
    if(no != NULL){
        no->valor = valor_inserir;
        no->prox = NULL;
        if(li->inicio == NULL){
            li->inicio = no;
            li->qtd++;
            return 1;
        }
        Elem* aux = li->inicio;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
        li->qtd++;
        return 1;
    }
    return 0;
}

// remover_inicio
// remover_final
// acessar_inicio
// acessar_final
// buscar_por_valor
// buscar_por_posicao
// destruir