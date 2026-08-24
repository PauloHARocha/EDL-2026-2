typedef struct quadrado Quadrado;

Quadrado* criar(float lado);
float acessar(Quadrado* q, char var);
int alterar(Quadrado* q, float lado);
void destruir(Quadrado* q);