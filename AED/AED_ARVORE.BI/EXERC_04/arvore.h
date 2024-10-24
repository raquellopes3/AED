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

int vazia (arvore r);

arvore inserir (arvore r, int x);

arvore remover(arvore r,int x);

void imprimir_in_ordem(arvore r);

void imprimir_pre_ordem(arvore r);

void imprimir_pos_ordem(arvore r);

int minimo(arvore r);

int maximo(arvore r);

int altura(arvore r);

int soma(arvore r);


#endif