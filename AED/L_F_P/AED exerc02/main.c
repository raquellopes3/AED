#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main (){
    lista* l1 = NULL;
    lista* l2 = NULL;
    lista* aux=NULL;

   l1= inserir (l1,1);
   l1= inserir (l1,2);   
   l1= inserir (l1,4);

   l2= inserir (l2,4);
   l2= inserir (l2,5);   
   l2= inserir (l2,6);

imprimir(l1);
imprimir(l2);
aux=intersecao(l1,l2);
imprimir(aux);

    
}