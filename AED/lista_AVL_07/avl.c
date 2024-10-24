#include"avl.h"
#include<stdio.h>
#include<stdlib.h>

arvoreavl rotacaoesquerda(arvoreavl p){
    arvoreavl u= p->dir;
    arvoreavl t2 =u->esq;
    u->esq = p;
    p->dir = t2;
    return u;
}

arvoreavl rotacaoduplaesq(arvoreavl p){
    arvoreavl u = p->dir;
    arvoreavl v = u->esq;
    arvoreavl t2 = v->esq;
    arvoreavl t3 = v->dir;
    p->dir = t2;
    u->esq = t3;
    v->esq = p;
    v->dir = u;
    return v;
} 