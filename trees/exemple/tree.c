#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esq, *dir;
} No;

// Função que adiciona um número na árvore
No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        // Cria o nó diretamente aqui
        No* novo = (No*)malloc(sizeof(No));
        novo->valor = valor;
        novo->esq = novo->dir = NULL;
        return novo;
    }

    if (valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else if (valor > raiz->valor)
        raiz->dir = inserir(raiz->dir, valor);
    else
        printf("Valor %d ja existe!\n", valor);

    return raiz;
}

// Busca um número
No* buscar(No* raiz, int valor) {
    if (raiz == NULL || raiz->valor == valor)
        return raiz;

    if (valor < raiz->valor)
        return buscar(raiz->esq, valor);
    else
        return buscar(raiz->dir, valor);
}

// Remove apenas se tiver 0 ou 1 filho
No* remover(No* raiz, int valor) {
    if (raiz == NULL) return NULL;

    if (valor < raiz->valor) {
        raiz->esq = remover(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = remover(raiz->dir, valor);
    } else {
        // Encontrou o nó
        if (raiz->esq && raiz->dir) {
            printf("Nao pode remover %d (tem dois filhos)\n", valor);
            return raiz;
        }

        No* temp = raiz->esq ? raiz->esq : raiz->dir;
        free(raiz);
        return temp;
    }

    return raiz;
}

// Mostra em ordem crescente
void mostrar(No* raiz) {
    if (raiz != NULL) {
        mostrar(raiz->esq);
        printf("%d ", raiz->valor);
        mostrar(raiz->dir);
    }
}

