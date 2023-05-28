#include "pch.h"
#include "HeapTree.h"

// Funciones para acceder a datos
int Heap::padre(int pos){
    if (pos % 2 == 0)
        return (pos / 2); 
    return (pos - 1) / 2; 
}

int Heap::hijoIzq(int pos){ 
    return 2 * pos;
}

int Heap::hijoDer(int pos){ 
    return 2 * pos + 1;
}

// Funciones de procesos
bool Heap::empiezaNivel(int pos){ // Es potencia de dos
    return pos > 0 && ((pos & (pos - 1)) == 0);
}

void Heap::permutar(int posPadre, int posHijo){ // Cambia uno por otro
    double padreValor = arbol[posPadre];
    arbol[posPadre] = arbol[posHijo];
    arbol[posHijo] = padreValor;
}

// Funciones del trabajo
void Heap::insertar(double valor){ // Inserta si es menor al tamanno maximo 
                                // La pos 0 siempre queda libre
    if (tamannoMax > cantidad){
        cantidad++;
        arbol[cantidad] = valor;
        int pos = cantidad;
        while (pos > 1 && arbol[padre(pos)] < arbol[pos]){
            permutar(padre(pos), pos);
            pos = padre(pos);
        }
    }
}

void Heap::eliminar(){ // Elimina si hay datos
    if (cantidad > 0){
        arbol[1] = arbol[cantidad];
        arbol[cantidad] = 0;
        cantidad--; // Se le resta 1
        int pos = 1;
        while (pos <= cantidad){
            if (hijoIzq(pos) <= cantidad && arbol[pos] < arbol[hijoIzq(pos)] && arbol[hijoIzq(pos)] > arbol[hijoDer(pos)]){
                permutar(pos, hijoIzq(pos));
                pos = hijoIzq(pos);
                continue;
                }
            if (hijoDer(pos) <= cantidad && arbol[pos] < arbol[hijoDer(pos)]){
                permutar(pos, hijoDer(pos));
                pos = hijoDer(pos);
                continue;
            }
            break;
        }
    }
}

void Heap::imprimir() {
    for (int pos = 1; pos <= cantidad; pos++) {
        if (empiezaNivel(pos))
            cout << endl;
        if (arbol[pos] != 0) {
            cout << arbol[pos] << "\t";
        }
    }
    cout << endl;
}

string Heap::getInfoString() {
    string info = to_string(pos[0]) + "\t";
    info += to_string(pos[1]) + "\t";
    info += to_string(vida) + "\t";
    info += to_string(crecimiento) + "\t";
    info += to_string(crecido) + "\t";
    info += to_string(atacadoArbol) + "\t";
    info += to_string(atacadoFrutoCuervo) + "\t";
    info += to_string(atacadoFrutoOveja) + "\t";
    info += to_string(destruccionFruto) + "\t";
    info += to_string(vivo) + "\t";
    info += to_string(frutosVendidos) + "\t";
    info += to_string(frutosPerdidos) + "\t";
    info += to_string(cantidad) + "\t";
    info += to_string(tamannoMax) + "\t";
    for (int pos = 1; pos <= cantidad; pos++) {
        if (arbol[pos] != 0) {
            info += to_string(arbol[pos]) + "\t";
        }
    }
    return info;
}