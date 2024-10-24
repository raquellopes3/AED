#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>
#include <stdlib.h>

 struct no{
    int info;
    struct no * esq;
    struct no * dir;
};

typedef struct no* arvore;

int vazia(arvore r );

arvore inserir(arvore r, int x);


void imprimir_in_ordem(arvore r);

int estritamente_binaria(arvore r );

int arvore_cheia(arvore r);



#endif