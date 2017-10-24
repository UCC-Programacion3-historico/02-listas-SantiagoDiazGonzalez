#include <iostream>
#include "union.h"
#include "../Lista/Lista.h"
using namespace std;

template<class T>
void mostrarlista(Lista<T> l) {
    for (int i = 0; i < l.getTamanio()-1; i++) {
        cout << l.getDato(i) << " - ";
    }
    cout << endl;
}

template<class T>
void mostrarlista(Lista<T> *l) {
    for (int i = 0; i < l->getTamanio(); i++) {
        cout << l->getDato(i) << " - ";
    }
    cout << endl;
}

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    Lista<int> A, B, *C;

    A.insertarUltimo(4);
    A.insertarUltimo(3);
    A.insertarUltimo(2);
    A.insertarUltimo(1);

    cout << "A" << endl;
    mostrarlista(A);

    B.insertarUltimo(9);
    B.insertarUltimo(8);
    B.insertarUltimo(7);
    B.insertarUltimo(6);
    B.insertarUltimo(5);

    cout << "B" << endl;
    mostrarlista(B);

    C = unir(A,B);
    mostrarlista(C);

    return 0;
}