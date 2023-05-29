#include "pch.h"
#include "ArbolBinarioOrdenado.h"


Nodo* ArbolBinarioOrdenado::insertarNodoRecursivo(Nodo* nodo, double valor) {
    if (nodo == nullptr) {
        return new Nodo(valor);
    }

    if (valor < nodo->valor) {
        nodo->izquierdo = insertarNodoRecursivo(nodo->izquierdo, valor);
    }
    else {
        nodo->derecho = insertarNodoRecursivo(nodo->derecho, valor);
    }

    return nodo;
}

void ArbolBinarioOrdenado::insertar(double valor) {
    raiz = insertarNodoRecursivo(raiz, valor);
}

Nodo* ArbolBinarioOrdenado::encontrarSucesor(Nodo* nodo) {
    while (nodo->izquierdo != nullptr) {
        nodo = nodo->izquierdo;
    }
    return nodo;
}

Nodo* ArbolBinarioOrdenado::eliminarNodo(Nodo* nodo, Nodo* nodoEliminar) {
    if (nodo == nullptr)
        return nodo;

    // Caso base: el nodo a eliminar es la raíz
    if (raiz == nodoEliminar) {
        if (raiz->izquierdo == nullptr) {
            Nodo* temp = raiz;
            raiz = raiz->derecho;
            delete temp;
            return raiz;
        }
        else if (raiz->derecho == nullptr) {
            Nodo* temp = raiz;
            raiz = raiz->izquierdo;
            delete temp;
            return raiz;
        }
        else {
            Nodo* sucesor = encontrarSucesor(raiz->derecho);
            raiz->valor = sucesor->valor;
            raiz->derecho = eliminarNodo(raiz->derecho, sucesor);
            return raiz;
        }
    }

    // Buscar el nodo a eliminar en el subárbol izquierdo
    if (nodoEliminar->valor < nodo->valor) {
        nodo->izquierdo = eliminarNodo(nodo->izquierdo, nodoEliminar);
    }
    // Buscar el nodo a eliminar en el subárbol derecho
    else if (nodoEliminar->valor > nodo->valor) {
        nodo->derecho = eliminarNodo(nodo->derecho, nodoEliminar);
    }
    // Nodo a eliminar encontrado
    else {
        if (nodo->izquierdo == nullptr) {
            Nodo* temp = nodo;
            nodo = nodo->derecho;
            delete temp;
            return nodo;
        }
        else if (nodo->derecho == nullptr) {
            Nodo* temp = nodo;
            nodo = nodo->izquierdo;
            delete temp;
            return nodo;
        }
        else {
            Nodo* sucesor = encontrarSucesor(nodo->derecho);
            nodo->valor = sucesor->valor;
            nodo->derecho = eliminarNodo(nodo->derecho, sucesor);
        }
    }

    return nodo;
}

void ArbolBinarioOrdenado::preorden(Nodo* nodo) {
    if (nodo != nullptr) {
        cout << nodo->valor << " ";
        preorden(nodo->izquierdo);
        preorden(nodo->derecho);
    }
}

void ArbolBinarioOrdenado::inorden(Nodo* nodo) {
    if (nodo != nullptr) {
        inorden(nodo->izquierdo);
        cout << nodo->valor << " ";
        inorden(nodo->derecho);
    }
}

void ArbolBinarioOrdenado::postorden(Nodo* nodo) {
    if (nodo != nullptr) {
        postorden(nodo->izquierdo);
        postorden(nodo->derecho);
        cout << nodo->valor << " ";
    }
}

bool ArbolBinarioOrdenado::buscar(double valor) {
    Nodo* actual = raiz;
    while (actual != nullptr) {
        if (valor == actual->valor) {
            return true;
        }
        else if (valor < actual->valor) {
            actual = actual->izquierdo;
        }
        else {
            actual = actual->derecho;
        }
    }
    return false;
}

int ArbolBinarioOrdenado::altura(Nodo* nodo) {
    if (nodo == nullptr) {
        return -1;
    }
    int altura_izquierda = altura(nodo->izquierdo);
    int altura_derecha = altura(nodo->derecho);
    return 1 + max(altura_izquierda, altura_derecha);
}

int ArbolBinarioOrdenado::cantidadNodos(Nodo* nodo) {
    if (nodo == nullptr) {
        return 0;
    }
    int contador = 1;
    if (nodo->izquierdo != nullptr) {
        contador += cantidadNodos(nodo->izquierdo);
    }
    if (nodo->derecho != nullptr) {
        contador += cantidadNodos(nodo->derecho);
    }
    return contador;
}

double ArbolBinarioOrdenado::sumatoriaValores(Nodo* nodo) {
    if (nodo == nullptr) {
        return 0;
    }
    return nodo->valor + sumatoriaValores(nodo->izquierdo) + sumatoriaValores(nodo->derecho);
}

Nodo* ArbolBinarioOrdenado::encontrarMaximo(Nodo* nodo) {
    if (nodo == nullptr) {
        return nullptr;
    }
    while (nodo->derecho != nullptr) {
        nodo = nodo->derecho;
    }
    return nodo;
}


Nodo* ArbolBinarioOrdenado::encontrarMinimo(Nodo* raiz) {
    if (raiz == nullptr) {
        return nullptr;
    }

    while (raiz->izquierdo != nullptr) {
        raiz = raiz->izquierdo;
    }

    return raiz;
}

Nodo* ArbolBinarioOrdenado::eliminarNodo(Nodo* nodo, double valor) {
    if (nodo == nullptr) {
        return nullptr;
    }
    if (valor < nodo->valor) {
        nodo->izquierdo = eliminarNodo(nodo->izquierdo, valor);
    }
    else if (valor > nodo->valor) {
        nodo->derecho = eliminarNodo(nodo->derecho, valor);
    }
    else {
        // Caso 1: Nodo sin hijos o con un hijo
        if (nodo->izquierdo == nullptr) {
            Nodo* temp = nodo->derecho;
            delete nodo;
            return temp;
        }
        else if (nodo->derecho == nullptr) {
            Nodo* temp = nodo->izquierdo;
            delete nodo;
            return temp;
        }

        // Caso 2: Nodo con dos hijos
        Nodo* temp = encontrarMinimo(nodo->derecho);
        nodo->valor = temp->valor;
        nodo->derecho = eliminarNodo(nodo->derecho, temp->valor);
    }
    if (raiz->valor == valor) {
        // La raíz ha sido eliminada, establecer raiz como nula
        this->raiz = nullptr;
    }
    return nodo;
}

double ArbolBinarioOrdenado::precioLimpio(Nodo* nodo) {
    if (nodo != nullptr) {
        return nodo->valor;
    }
    return 0.0;
}