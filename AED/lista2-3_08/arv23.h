#ifndef ARV23_H
#define ARV23_H
#define ORDEM 5

struct no23 {
int chave_esq; // chave esquerda
int chave_dir; // chave direita
struct no23 * esq; // subarvore esquerda
struct no23 * meio; // subarvore do meio
struct no23 * dir; // subarvore direita
int n; // numero de chaves do no 
};

typedef struct no23* arvore23;

typedef struct no {
int numChaves;
int chave[ORDEM];
struct no* filho[ORDEM+1];
} arvoreB;

arvore23 insere(arvore23 r, int chave);

arvore23 busca(arvore23, int chave);//***

int minimo(arvore23 r);

int maximo(arvore23 r);

int conta_nos(arvore23 r);//*****

void in_ordem(arvore23 r);
(arvoreB* r);

//arvoreB
int maxi
//int mini(arvoreB* r);

int buscar_k(B_Tree* node,int k);

void imprimirMaiores(arvoreB* node,int k);

int conta_nos_minimos_chaves(B_Tree* node);


#endif