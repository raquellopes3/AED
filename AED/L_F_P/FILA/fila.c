#include "fila.h"

fila* cria_fila_vazia(){
 fila *aux= (fila*) malloc(sizeof(fila));
 aux->inicio = NULL;
 aux->fim = NULL;
 return aux;
}

void enqueue(fila* f,TipoItem x){
    struct no* aux = (struct no*) malloc(sizeof(struct no));
    aux->info = x;
    aux->prox =NULL;                                                
    if (vazia((f))) {
        f-> inicio = aux;
    }
    else {
        f->fim =aux;
    }
}

TipoItem* dequeue(fila* f){
    if (!vazia(f)){
        TipoItem* x =(TipoItem*) malloc(sizeof(TipoItem));
        struct no* aux = f->inicio;
        *x =f->inicio->info;
        if(f->inicio == f->fim);
        f->fim =NULL;
        f->inicio = f->inicio->prox;
        free(aux);
        return x;
    }
    else return NULL;
}



