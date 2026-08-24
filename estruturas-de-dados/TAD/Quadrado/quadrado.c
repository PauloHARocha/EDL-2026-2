#include<stdlib.h>
#include"quadrado.h"

struct quadrado{
    float lado;
    float area;
    float perimetro;
};

Quadrado* criar(float lado){
    Quadrado* q = malloc(sizeof(Quadrado));
    if(q != NULL){
        if(lado <= 0)
            lado = 1;    
        q->lado = lado;
        q->area = q->lado*q->lado;
        q->perimetro = 4*q->lado;    
    }
    return q;
}

float acessar(Quadrado* q, char var){
    if(var == 'L')
        return q->lado;
    if(var == 'A')
        return q->area;
    if(var == 'P') 
        return q->perimetro;
    return -1;
}

int alterar(Quadrado* q, float lado){
    if(lado <= 0)
        return -1;
    else{
        q->lado = lado;
        q->area = q->lado*q->lado;
        q->perimetro = 4*q->lado;    
        return 1;
    }
}

void destruir(Quadrado* q){
    if(q != NULL)
        free(q);
}