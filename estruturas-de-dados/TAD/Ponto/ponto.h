typedef struct ponto* Ponto;

Ponto criar(float x, float y);
float acessar(Ponto p, char valor);
int alterar(Ponto p, float dado, char valor);
void destruir(Ponto p);
float distancia(Ponto p1, Ponto p2);