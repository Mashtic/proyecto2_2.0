#ifndef HEAPTREEATACADOARBOL_H
#define HEAPTREEATACADOARBOL_H

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

class HeapTreeAtacadoArbol {

public:

    // Constructores
    HeapTreeAtacadoArbol(int pTiempoDestruccion, vector<Heap>* pArbol)
        : arbol(pArbol), running(true), tiempoDestruccionSegundos(pTiempoDestruccion) {}

    // M�todos
    // Procesos
    void comprobarMuerto() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getVida() <= 0) {
                        (*arbol)[pos].muerto();
                        cout << "Heap Muerto" << endl;
                    }
                }
            }
        }
    }

    void destruyendoArbol() {
        this_thread::sleep_for(chrono::milliseconds(tiempoDestruccionSegundos * 10)); // TiempoCrecimientoSegundos * 0.01
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getAtacadoArbol()) {
                        (*arbol)[pos].disminuirVida();
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
                destruyendoArbol();
                this_thread::sleep_for(chrono::milliseconds(1));
                comprobarMuerto();
            }
        }
    }

private:

    // Par�metros
    // Estructura de datos
    vector<Heap>* arbol;

    // Tiempos
    int tiempoDestruccionSegundos;

    // Hilo
    bool running;
};

#endif