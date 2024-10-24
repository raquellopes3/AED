#include "pilha.h"

int vazia(pilha*p){
    return (p->topo == NULL);
}

pilha* criar_pilha_vazia(){
    pilha* aux = (pilha*)malloc(sizeof(pilha));
    aux->topo=NULL;
    return NULL;
}

void push(pilha* p, TipoItem x){
    struct no*aux = (struct no*) malloc(sizeof(struct no));
    aux->info = x;
    aux->prox = p->topo;
    p->topo = aux;
        
}
TipoItem* pop(pilha* p){
    if(!vazia(p)){
        TipoItem* x =(TipoItem*)malloc(sizeof(TipoItem));
        struct no* aux = p->topo;
        *x = p->topo->info;
        p->topo = p->topo->prox;
        free(aux);
        return x;
    }
    else{
        printf ("pilha vazia!");
        return NULL;
    }
}
