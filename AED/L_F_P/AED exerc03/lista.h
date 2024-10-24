#include<stdio.h>
#include<stdlib.h>

#ifndef LISTA_H
#define LISTA_H   

typedef struct no {
int info;
struct no * prox;
}no;

typedef struct { // estrutura para lista encadeada com cabeca e cauda
struct no* cabeca;
struct no* cauda;
} lista;

lista* inicializa();

int vazia (lista* l);   

void inserir_cabeca (lista* l , int info);

void inserir_cauda(lista* l,int info);

void remover(lista* l,int info);

void imprimir (lista* l);

#endif
