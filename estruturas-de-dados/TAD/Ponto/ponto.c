#include<stdlib.h>
#include<math.h>

struct ponto{
    float x;
    float y;
};

typedef struct ponto* Ponto;

Ponto criar(float x, float y){
    Ponto p = malloc(sizeof(struct ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}
float acessar(Ponto p, char valor){
    if(valor == 'x')
        return p->x;
    if(valor == 'y')
        return p->y;
    return -1;    
}
int alterar(Ponto p, float dado, char valor){
    if(valor == 'x'){
        p->x = dado;
        return 1;
    }
    if(valor == 'y'){
        p->y = dado;
        return 1;
    }
    return -1;
}
void destruir(Ponto p){
    if(p != NULL)
        free(p);
}

float distancia(Ponto p1, Ponto p2){
    float dx = acessar(p1, 'x') - acessar(p2, 'x');
    float dy = acessar(p1, 'y') - acessar(p2, 'y');
    float h = sqrt(dx*dx + dy*dy);
    return h;
}