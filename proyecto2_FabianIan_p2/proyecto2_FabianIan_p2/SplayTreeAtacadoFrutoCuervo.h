#ifndef SPLAYTREEATACADOFRUTOCUERVO_H
#define SPLAYTREEATACADOFRUTOCUERVO_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#include "Aleatorios.h"
#include "SplayTree.h"

class SplayTreeAtacadoFrutoCuervo {

public:

    // Constructores
    SplayTreeAtacadoFrutoCuervo(int pTiempoDestruccion, int tasaComer, vector<SplayTree>* pArbol)
        : arbol(pArbol), running(true), tiempoDestruccionSegundos(pTiempoDestruccion), frutasComidasTasa(tasaComer) {}

    // M�todos
    // Procesos
    void perderFruto() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].destruccionFrutoCompleta() && (*arbol)[pos].getAtacadoFrutoCuervo()) {
                        for (int cant = 0; cant < frutasComidasTasa; cant++) {
                            (*arbol)[pos].perderFruto();
                        }
                        cout << "Splay Frutos restantes (Cuervo): " << (*arbol)[pos].CountNodes((*arbol)[pos].raiz) << endl;
                    }
                }
            }
        }
    }

    void destruyendoFruto() {
        this_thread::sleep_for(chrono::milliseconds(tiempoDestruccionSegundos * 10)); // TiempoCrecimientoSegundos * 0.01
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getAtacadoFrutoCuervo()) {
                        (*arbol)[pos].aumentaDestruccionFruto();
                    }
                }
            }
        }
    }

    // Hilo
    void reanudarHilo() { running = true; }
    void pausarHilo() { running = false; }
    bool getRunning() const { return running; }

    void run() {
        while (true) {
            this_thread::sleep_for(chrono::milliseconds(1));
            while (running) {
                destruyendoFruto();
                this_thread::sleep_for(chrono::milliseconds(1));
                perderFruto();
            }
        }
    }

private:

    // Par�metros
    // Estructura de datos
    vector<SplayTree>* arbol;

    // Tiempos
    int tiempoDestruccionSegundos;

    // Tasa frutas
    int frutasComidasTasa;

    // Hilo
    bool running;
};

#endif