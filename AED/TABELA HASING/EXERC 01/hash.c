#include "hash.h"
#include<stdio.h>

void inicializaTabelaHash(TabelaHash T){
   int i;
   for(i=0;i<TAM;i++){
    T[i]->k=0;
    T[i]>r=NULL;
    T[i]->ocupado=0;
   }
}


void inserir(TabelaHash T, TipoChave k, TipoRegistro r){
    indice = hash(k);
    if ( T[indice]->ocupado==1)
        printf("ocupado");
    else{
        T[indice]->r = (TipoRegistro*)malloc(sizeof(TipoRegistro) ;
        T[indice]->k = k;
        T[indice]->ocupado = 1;
    }
    
}


int buscar(TabelaHash T, TipoChave k){
    indice= hash(k);
    return T[indice];
}


void remover(TabelaHash T, TipoChave k){
    indice=hash(k);
    T[indice]->ocupado=0;
    T[indice]->k=0;
    free(T[indice]->r);
}


int hash(int k){
    return k%TAM;
}