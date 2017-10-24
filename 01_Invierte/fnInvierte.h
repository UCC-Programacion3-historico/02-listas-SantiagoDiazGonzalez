#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);

/*
template <class T>
void fnInvierte (Lista<T> *lis){
    Nodo<T> *aux1;
    Nodo<T> *aux2;
    Nodo<T> *final;

    while (final->getNext() != NULL)
        final = final->getNext();

    while (lis->getInicio()->getNext() != NULL){
        while (aux1->getNext() != NULL)
            aux1 = aux1->getNext();

        while (aux2->getNext() != final)
            aux2 = aux2->getNext();

        aux1->setNext(aux2)
    }

}

*/
#endif //FNINVIERTE_H
