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
int remover_inicio(Lista li){
    if(li->qtd == 0) return 0;
    Elem* aux = li->inicio;
    li->inicio = aux->prox;
    free(aux);
    li->qtd--;
    return 1;
}
// acessar_inicio
int acessar_inicio(Lista li){
    if(li->qtd == 0) return 0;
    return li->inicio->valor;
}
// destruir
void destruir(Lista li){
    if(li == NULL) return;
    Elem* aux = li->inicio;
    while(aux->prox != NULL){
        Elem* atual = aux;
        aux = aux->prox;
        free(atual);
    }
    free(aux);
    free(li);
}
// remover_final
int remover_final(Lista li){
    if(li->qtd == 0) return 0;
    Elem* aux = li->inicio;
    if(aux->prox == NULL){
        free(aux);
        li->inicio = NULL;
        li->qtd--;
        return 1;
    }
    Elem* ant;
    while(aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }
    free(aux);
    ant->prox = NULL;
    li->qtd--;
    return 1;
}



// acessar_final
// buscar_por_valor
// buscar_por_posicao