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
    std::cout << "Ejercicio 01/02\n" << std::endl;

    Lista<float> l;
    int n;
    float x;

    do {
        cout << "1- Insertar primero" << endl;
        cout << "2- Insertar al medio" << endl;
        cout << "3- Insertar al final" << endl;
        cout << "4- Mostrar lista" << endl;
        cout << "0- Terminar" << endl;
        cout << "Ingrese la accion que desea realizar: ";
        cin >> n;
        cout << endl;

        if (n != 0 && n!=4) {
            cout << "Ingrese el dato a insertar: ";
            cin >> x;
            cout << endl;
        }

        switch (n) {
            case 1:
                l.insertarPrimero(x);
                break;
            case 2:
                l.insertar(l.getTamanio() / 2, x);
                break;
            case 3:
                l.insertarUltimo(x);
                break;
            case 4:
                mostrarlista(l);
                break;
            default:
                break;
        }
    } while (n != 0);
    return 0;
}