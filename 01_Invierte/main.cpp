#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;
int main() {
    cout << "Ejercicio 02/01\n" << std::endl;
    Lista<int> *L = new Lista<int>;
    for(int j=10; j>0; j--)
        L->insertarUltimo(j);

    for (int j = 0; j < L->getTamanio(); j++) {
        cout << L->getDato(j) << " ";
    }

    cout << endl;

    fnInvierte(L);

    for (int j = 0; j < L->getTamanio(); j++) {
        cout << L->getDato(j) << " ";
    }

    return 0;
}