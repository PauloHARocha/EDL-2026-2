#define MAX 4

typedef struct pilha* Pilha;

//create
Pilha criar();
// push
int empilhar(Pilha p, int valor);
//peek
int acessar_topo(Pilha p);
// pop
int desempilhar(Pilha p);
// free
void destruir(Pilha p);
