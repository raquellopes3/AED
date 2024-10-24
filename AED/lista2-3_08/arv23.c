#include"arv23.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int vazia(arvore23 r){
    return (r==NULL);
}

arvore23 busca(arvore23 r, int chave){
    if (vazia(r))
        return NULL;
    if(r->chave_esq== chave)
        return r;
    if(r->n==2 && r->chave_dir== chave)
        return r;
    if(chave < r-> chave_esq)
        return busca(r->esq,chave);
    else if(r->n == 1)
        return busca(r->meio,chave);
    else if(chave < r->chave_dir)
        return busca(r-> meio,chave);
    else return busca(r->dir,chave);
}

int minimo(arvore23 r){
    if(r == NULL){
        return NULL;
    }
    if(r->esq != NULL){
        return minimo(r->esq);
    }
    if(r->chave_esq == NULL){
        return r->chave_esq;
    }
}


int maximo(arvore23 r){
    if(r == NULL){
        return NULL;
    }
    if(r->dir!= NULL){

              
        return maximo(r->dir);
    }
    if(r->chave_dir == NULL){
        if(n==1)
        return r->chave_esq;
    else if(n==2)
        return r->chave_dir;
    }
}


// arvoreB

 int max_key(B_Tree* node){
        if(is_empty(node)) return -1;
        else{
            if(is_leaf(node)) 
                return node->key[node->nKey-1];
            else 
                return max_key(node->child[node->nKey]);
        }
    }

//int mini(arvoreB* r)

int buscar_k(B_Tree* node,int k){
        int count=0;
        if(is_empty(node))
         return -1;
        else 
        return buscar_k_esimo(node,k,&count);
}



int conta_nos_minimos_chaves(B_Tree* node){
        int count = 0;

        if(node == NULL) return count;
        if(node->nKey == (ORDER / 2)) count++;

        for(int i = 0; i <= node->nKey; i++) count += conta_nos_minimos_chaves(node->child[i]);

    return count;
}

void imprimirMaiores(arvoreB* node,int k){

        if(node==NULL) return;
        
        int i=0;
        while(i < node->nKey && k >= node->key[i])i++;

        int j;
        for(j = i; j < node->nKey; j++){
            imprimirMaiores(node->child[j],k);

            printf("%d ",node->key[j]);
        }
        imprimirMaiores(node->child[j],k);
    }

