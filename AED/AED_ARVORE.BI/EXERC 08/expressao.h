#ifndef EXPRESSAO_H
#define EXPRESSAO_H

typedef struct no_oper{
    char oper;
    struct no_oper* prox;
} pilha_oper;

typedef struct no_exp{
    int is_oper;
    char oper;
    int num;
    struct no_exp* prox;
} fila_exp;

fila_exp* gerar_exp (char* str);

void print_exp (fila_exp* fila);

#endif // EXPRESSAO_H