#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct no{
    int info;
    struct no * esq;
    struct no * dir;
};

typedef struct no* arvore;

int vazia (arvore r);

int calcular (arvore r);

arvore cosntroi_arvore(char str[]);

char prefixa(arvore r);

char infixa(arvore r);

char posfixa(arvore r);

#endif