#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H

template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T> *L = new Lista<T>();
    int i;

    for(i=0; i<lisA.getTamanio(); i++)
        L->insertarUltimo(lisA.getDato(i));

    for(i=0; i<lisB.getTamanio(); i++)
        L->insertarUltimo(lisB.getDato(i));

    return L;
}

#endif //UNION_H