﻿#ifndef HEAPTREECRECER_H
#define HEAPTREECRECER_H

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#include "Aleatorios.h"
#include "HeapTree.h"

class HeapTreeCrecer {

public:

    // Constructor
    HeapTreeCrecer(int creceArbolSeg, vector<Heap>* pArbol) {
        arbol = pArbol;
        crecimientoArbolSegundos = creceArbolSeg;
        running = true;
    }

    // M�todos
    // Sets
    void setCrecimientoArbolSegundos(int pCrecimientoArbolSegundos) { crecimientoArbolSegundos = pCrecimientoArbolSegundos; }

    // Gets
    string getInfoString() {
        return to_string(crecimientoArbolSegundos) + "\t";
    }

    int getCrecimientoArbolSegundos() const { return crecimientoArbolSegundos; }
    bool getRunning() const { return running; }

    // Proceso
    void comprobarCrecido() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getCrecimiento() >= 100 && !(*arbol)[pos].getCrecido()) {
                        cout << "Heap ha crecido" << endl;
                        (*arbol)[pos].establecerCrecido();
                    }
                }
            }
        }
    }

    void creciendoArbol() {
        if (!arbol->empty()) {
            this_thread::sleep_for(chrono::milliseconds(crecimientoArbolSegundos * 10)); // TiempoCrecimientoSegundos * 0.01
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if (!(*arbol)[pos].getCrecido() && !(*arbol)[pos].enPeligro()) {
                        (*arbol)[pos].aumentaCrecimiento();
                    }
                }
            }
        }
    }

    // Hilo
    void reanudarHilo() { running = true; }
    void pausarHilo() { running = false; }

    void run() {
        while (true) {
            this_thread::sleep_for(chrono::milliseconds(1));
            while (running) {
                creciendoArbol();
                this_thread::sleep_for(chrono::milliseconds(1));
                comprobarCrecido();
            }
        }
    }

private:

    // Atributos
    // Estructura de datos
    vector<Heap>* arbol;

    // Tiempos
    int crecimientoArbolSegundos;

    // Hilo
    bool running;
};

#endif
