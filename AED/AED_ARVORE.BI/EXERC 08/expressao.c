#include "expressao.h"
#include <stdlib.h>
#include <stdio.h>

int precedencia(char x){
    switch (x){
    case '+':
        return 1;
    case '-':
        return 1;
    case '*':
        return 2;
    case '/':
        return 2;
    default:
        return 0;
    }
}

int digits(int x){
    if(x==0) return 1;
    int total=0;
    while(x){
        x/=10;
        total++;
    }
    return total;
}

fila_exp* inserir_num(fila_exp* fila, int num){
    if(fila==NULL){
        fila = (fila_exp*) malloc(sizeof(fila_exp));
        fila->is_oper = 0;
        fila->num = num;
        fila->prox = NULL;
        return fila;
    }
    fila->prox = inserir_num(fila->prox, num);
    return fila;
}

fila_exp* inserir_oper(fila_exp* fila, char oper){
    if(fila==NULL){
        fila = (fila_exp*) malloc(sizeof(fila_exp));
        fila->is_oper = 1;
        fila->oper = oper;
        fila->prox = NULL;
        return fila;
    }
    fila->prox = inserir_oper(fila->prox, oper);
    return fila;
}

pilha_oper* push(pilha_oper* pilha, char oper){
    pilha_oper* aux = (pilha_oper*) malloc(sizeof(pilha_oper));
    aux->oper = oper;
    aux->prox = pilha;
    return aux;
}

char pop(pilha_oper** pilha){
    char oper = (*pilha)->oper;
    pilha_oper* aux = (*pilha);
    (*pilha) = (*pilha)->prox;
    free(aux);
    aux = NULL;
    return oper;
}

fila_exp* gerar_exp (char* str){
    fila_exp* fila=NULL;
    pilha_oper* pilha=NULL;
    int num;
    char oper;

    while(*str){
        if( (*str)>='0' && (*str)<='9' ){
            num = atoi(str);
            fila = inserir_num(fila, num);
            str+=digits(num);
        }

        else{
            if(*str=='(') {
                pilha = push(pilha, '(');
            }

            else if(*str==')'){
                do{
                    oper = pop(&pilha);
                    if(oper!='(') fila = inserir_oper(fila, oper);
                }
                while (oper!='(');
            }

            else{
                if(pilha==NULL || precedencia(*str)>precedencia(pilha->oper)){
                    pilha = push(pilha, *str);
                }

                else{
                    do{
                        oper = pop(&pilha);
                        fila = inserir_oper(fila, oper);
                    }
                    while (pilha!=NULL && precedencia(*str)<=precedencia(pilha->oper));
                    pilha = push(pilha, *str);
                }
            }

            str++;
        }
    }

    while(pilha!=NULL){
        oper = pop(&pilha);
        fila = inserir_oper(fila, oper);
    }

    return fila;
}

void print_exp (fila_exp* fila){
    if(fila==NULL){
        printf("\n");
        return;
    }
    if(fila->is_oper) printf("%c ", fila->oper);
    else printf("%d ", fila->num);
    print_exp(fila->prox);
}