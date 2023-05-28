#ifndef GRANJERO_H
#define GRANJERO_H

#include <iostream>
#include <string>

using namespace std;

struct Granjero {

    int pos[2];
    string nombre;
    double dinero;

    Granjero(string pNombre, double pDinero) {
        pos[0] = 0;
        pos[1] = 0;
        nombre = pNombre;
        dinero = pDinero;
    }

    // Getters 
    int getX() {
        return pos[0];
    }

    int getY() {
        return pos[1];
    }

    string getPos() {
        return "(" + to_string(pos[0]) + "," + to_string(pos[1]) + ")";
    }

    // Métodos movimiento (Setter)
    void moverIzquierda() {
        if (pos[0] > 0)
            pos[0] -= 1;
    }

    void moverDerecha() {
        if (7 > pos[0])
            pos[0] += 1;
    }

    void moverArriba() {
        if (pos[1] > 0)
            pos[1] -= 1;
    }

    void moverAbajo() {
        if (7 > pos[1])
            pos[1] += 1;
    }

    void ganaDinero(double ganado) {
        dinero += ganado;
    }

    void pierdeDinero(double pierde) {
        dinero -= pierde;
    }

    double getDinerio() {
        return dinero;
    }

};

#endif