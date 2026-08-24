#include"ponto.h"
#include<stdio.h>

int main(){

    Ponto p1 = criar(2, 2);
    Ponto p2 = criar(5, 5);

    float d = distancia(p1, p2);
    printf("A distancia entre os pontos é: %.2f\n", d);

    destruir(p1);
    destruir(p2);
    return 0;
}