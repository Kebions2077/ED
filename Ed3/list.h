#define TAM 40 

typedef struct aluno {
    int mat;
    char nome[TAM];
    float nota;
    struct aluno* prox;
} no;

no* coloca(no* lista, int mat, char nome[], float nota);
no* tira(no* lista, char nome[]);
void mostra(no* lista);