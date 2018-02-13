#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H

template <class T>
void fnInvierte (Lista<T> *L, Lista<T> *C){
    if(C->getTamanio()==0)
        return;
    L->insertarPrimero(C->getDato(0));
    C->remover(0);
    fnInvierte(L,C);
}

template <class T>
void fnInvierte (Lista<T> *L){
    Lista<T> C(*L);
    L->vaciar();
    fnInvierte(L,&C);
}
#endif //FNINVIERTE_H
