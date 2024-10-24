#include "arvore.c"
#include<stdio.h>
#include<stdlib.h>

int main(){
     arvore r = NULL;

     r=inserir(r,5);
     r=inserir(r,3);
     r=inserir(r,7);
     r=inserir(r,6);
     r=inserir(r,8);


    printf("e estritamente binaria = %d\n", estritamente_binaria(r));

    arvore r2 = NULL;

    r2=inserir(r2,5);
     r2=inserir(r2,3);
     r2=inserir(r2,7);
     r2=inserir(r2,6);

    printf("eh similar = %d\n", similares(r, r2));

    return 0;

}