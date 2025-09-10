#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int a, *p, **pointdexter;
    srand((unsigned)time(NULL));
    a = rand() % 10000;
    p = &a;
    pointdexter = &p;

    printf("----------------------------------------------\n");
    printf("Conteudo variavel a: %i\n", a);
    printf("Endereco de a: %p\n", (void *)&a);
    printf("Conteudo via p (*p): %i\n", *p);
    printf("Valor de p (aponta para): %p\n", (void *)p);
    printf("Endereco da variavel p (&p): %p\n", (void *)&p);
    printf("Valor de pointdexter (aponta para p): %p\n", (void *)pointdexter);
    printf("Conteudo via ponteiro-duplo (**pointdexter): %i\n", **pointdexter);
    printf("----------------------------------------------\n");
    return 0;
}