#include"arvore.h"
#include<stdio.h>
#include<stdlib.h>

int vazia (arvore r){
    return (r==NULL);
}

arvore inserir(arvore r, int x){
    if(vazia(r)){//se ela for vazia,cria
        arvore r=(arvore )malloc(sizeof (arvore));
        r->info= x;
        r->esq = NULL;
        r->dir= NULL;
    }
    else if(x < r->info)//se a chave for menor que a raiz
        r->esq=inserir(r->esq,x);
    else  //se a chave for maior que a raiz
        r->dir=inserir(r->dir,x);
}

void imprimir_in_ordem(arvore r){//imprimir esq pra dir
    if(!vazia(r))
        imprimir_in_ordem(r->esq);
        printf("%d",r->info);
        imprimir_in_ordem(r->esq);
}

void imprimir_pre_ordem(arvore r){ //imprimir raiz, esq e dir
    if(!vazia(r))
        printf("%d",r->info);
        imprimir_pre_ordem(r->esq);
            imprimir_pre_ordem(r->dir);
}

void imprimir_pos_ordem(arvore r){  //imprimir esq, dir e raiz 
    if(!vazia(r))
        imprimir_pos_ordem(r->esq);
        imprimir_pos_ordem(r->dir);
        printf("%d",r->info);
}

int minimo(arvore r){
    while(r->esq!=NULL)
    r=r->esq;
    return r->info;
}

int maximo(arvore r){
    while(r->dir!=NULL)
    r=r->dir;
    return r->info;
}

arvore remover(arvore r,int x){
    if(vazia(r)){//se for vazia
        return NULL;
    }else if (x < r->info)//se a chave for menor que a raiz
        r->esq=remover(r->esq,x);
    else if (x>r->info)//se a chave for maior que a raiz 
        r->dir=remover(r->dir,x);
    else if  (x==r->info){//se a chave for igual a raiz
        if (r->esq==NULL && r->dir==NULL){//no-folha
            free(r->info);
            return NULL;
        }
        else if (r->esq==NULL){//no interno do lado esq 
            r->info = minimo(r->dir); ///pra q 
            r->dir = remover(r->dir,x);
        }
        else if (r->dir==NULL){// no interno do lado dir
            r->info = minimo(r->esq);
            r->esq = remover(r->esq,x);
        }
    }
}
int altura(arvore r){
    int alt_esq,alt_dir,alt;
    if(vazia(r)) {
        return 0;
    }
    alt_esq=altura(r->esq);
    alt_dir=altura(r->dir);
    alt=(alt_esq > alt_dir) ? alt_esq + 1: alt_dir + 1 ;
    return alt;
} 

int soma(arvore r ){
    int s;
    if (vazia(r)){
        return 0;
    }
    s= r->info + soma(r->dir) + soma(r->esq);
    return s;
}


