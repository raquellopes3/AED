#include"arvore.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>


int vazia(arvore r ){
    return(r==NULL);
}

int calcular (arvore r){
    int r_esq,r_dir,resultado;
    if(vazia(r)){
        return 0;
    }else {
    r_esq = calcular(r->esq);
    r_dir = calcular (r->dir);

    else if(r->info == '+'){
        resultado = r_esq + r_dir;
    }
    else if(r->info == '-'){
        resultado = r_esq - r_dir;
    }
    else if(r->info == '/'){
        resultado = r_esq / r_dir;
    }
    else(r->info == '*'){
        resultado = r_esq * r_dir;
    }
   return resultado;
   }
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

arvore cosntroi_arvore(char str[]){
    int val;
    val=atoi(str);
    arvore r= (arvore) malloc(sizeof(arvore));
    
    
}
