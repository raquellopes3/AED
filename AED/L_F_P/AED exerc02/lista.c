#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int vazia (lista *l){
    return (l==NULL);
}

lista* inserir(lista* l, int info){ 
    if (vazia(l)){
        lista* novo= (lista*)malloc(sizeof(lista));
        novo->prox = NULL;
        novo->info = info;
        return novo;
    }
    l->prox = inserir(l->prox,info);
    return l;
}

void imprimir (lista* l){ 
    while(l!=NULL){
        printf("%d",l->info);
        l=l->prox;
    }
    printf("\n");
}

int pertence(lista* l, int x){
    if (vazia(l)) return 0;
    if (l->info==x)
        return 1;
    return pertence(l->prox,x);

}


lista* uniao(lista* l1, lista* l2){
    if (!vazia(l1)){
        lista* aux= (lista*)malloc(sizeof(lista));
        aux->info=l1->info;
        aux->prox=uniao(l1->prox,l2);
        return aux;
    }
    if (!vazia(l2)){
        lista* aux= (lista*)malloc(sizeof(lista));
        aux->info=l2->info;
        aux->prox=uniao(l1,l2->prox);
        return aux; 
        
    }  
}


lista* intersecao (lista* l1, lista* l2){
    
    if (!vazia(l1)){ 
        if(pertence(l2,l1->info)){
        lista* aux = (lista*)malloc(sizeof(lista));
        aux->info = l1->info;
        aux->prox = intersecao(l1->prox,l2);
        return aux;  
        }
        else intersecao(l1->prox,l2);
    }
    else return NULL;
}

