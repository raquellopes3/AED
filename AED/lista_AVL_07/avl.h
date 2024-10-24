#ifndef AVL_H
#define AVL_H

struct no{
    int info;
    struct no * esq;
    struct no * dir;
    int fb;
};
typedef struct no* arvoreavl;

arvoreavl rotacaoesquerda(arvoreavl p);

arvoreavl rotacaoesqdupla(arvoreavl p);


#endif