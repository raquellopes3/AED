#include<stdio.h>
#include<stdlib.h>

#ifndef PILHA_H
#define PILHA_H   

typedef int TipoItem;

struct no {
 TipoItem info;
 struct no* prox;
};

typedef struct { // estrutura para lista encadeada com cabeca e cauda
struct no* topo;
} pilha;

int vazia(pilha*p);

TipoItem* pop(pilha* p);

pilha* criar_pilha_vazia();

void push(pilha* p, TipoItem x);

#endif