#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

template<class T>
void mostrarlista(Lista<T> l) {
    for (int i = 0; i < l.getTamanio()-1; i++) {
        cout << l.getDato(i) << " - ";
    }
    cout << endl;
}

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;

    int n, i, x, pos;
    Lista<int> l;

    cout << "ingrese la cantidad de elementos que tiene la lista: ";
    cin >> n;
    cout << endl;

    for(i=0; i<n; i++){
        cout << "ingrese el numero de la posicion " << i << endl;
        cin >> x;
        l.insertar(i,x);
    }

    cout << "lista resultante:" << endl;
    mostrarlista(l);

    cout << "seleccione la posicion del elemento a eliminar: "; cin >> pos; cout << endl;
    l.remover(pos);

    cout << "lista resultante:" << endl;
    mostrarlista(l);

    return 0;
}