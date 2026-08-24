#include<stdio.h>
#include"quadrado.h"

int main(){
    Quadrado* quadrados[3];
    for(int i=0;i<3;i++)
         quadrados[i] = criar(i);

    for(int i=0;i<3;i++){
        printf("valor de i: %d\n",i);
        printf("Lado do quadrado: %.2f\n", acessar(quadrados[i], 'L'));
        printf("Area do quadrado: %.2f\n", acessar(quadrados[i], 'A'));
        printf("Perimetro do quadrado: %.2f\n", acessar(quadrados[i], 'P'));
        destruir(quadrados[i]);
    }


    return 0;
}