#include <stdio.h>
#include <stdlib.h>

#ifndef LISTA_H
#define LISTA_H

typedef struct no {
int info;
struct no *prox;
} lista;

int vazia (lista *l);

lista* inserir(lista* l, int info);

void imprimir (lista* l);

int pertence(lista* l, int x);

lista* uniao(lista* l1, lista* l2);

lista* intersecao (lista* l1, lista* l2);


#endif