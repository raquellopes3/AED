#include "lista.h"

lista* inicializa(){

    lista* aux=(lista*)malloc(sizeof(lista));
    aux->cabeca=NULL;
    aux->cauda=NULL;
    
    return aux;

}

int vazia (lista* l){
    return (l->cabeca==NULL) && (l->cauda==NULL);
}

void inserir_cabeca (lista* l , int info){
    no* novo=(no*)malloc(sizeof(no));
     novo->info=info;
     novo->prox=l->cabeca;
     l->cabeca=novo;
    
}

void inserir_cauda(lista* l,int info){
    no* novo=(no*) malloc(sizeof(no));
    
    novo->info=info;
    l->cauda->prox=novo;
    novo->prox=NULL;
    l->cauda = novo;
    
}

void remover(lista* l,int info){
    no* ant,* p;

    ant=p=l->cabeca;
    while((p!=NULL) && (p->info!=info)){
        ant=p;  
        p=p->prox;
    }
    if(p==NULL)
    printf("no n foi encontrado");

    if(p==l->cabeca)
    printf("no esta na cabeca");

    if(p==l->cauda)
    printf("no esta na cauda");
}
    
void imprimir (lista* l){ 
    no* p;
    while(p!=NULL){
        printf("%d",p->info);
        p=p->prox;
    }
    printf("\n");
}