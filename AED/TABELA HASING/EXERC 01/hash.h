#ifndef HASH_H
#define HASH_H
#define TAM 1000 // tamanho da tabela

typedef int TipoChave;

typedef struct {
    int matricula;
    char nome[50];
} TipoRegistro;

typedef struct {
    TipoChave k; // chave
    TipoRegistro r; // registro armazenado
    int ocupado; // indica se o slot esta ocupado
} slot;

typedef slot TabelaHash[TAM];

void inicializaTabelaHash(TabelaHash T);

void inserir(TabelaHash T, TipoChave k, TipoRegistro r);
//retorna a posic~ao do registro de chave k na tabela hash T
// ou -1 caso a chave n~ao esteja presente.

int buscar(TabelaHash T, TipoChave k);

void remover(TabelaHash T, TipoChave k);

int hash(int k);

#endif