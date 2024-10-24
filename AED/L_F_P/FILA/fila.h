#include <stdio.h>
#include <stdlib.h>

#ifndef FILA_H
#define FILA_H

typedef int TipoItem;

struct no {
 TipoItem info;
 struct no* prox;
};

typedef struct {
struct no* inicio;
struct no* fim;
}fila;

fila* cria_fila_vazia();

void enqueue(fila* f,TipoItem x);

TipoItem* dequeue(fila* f);

#endif