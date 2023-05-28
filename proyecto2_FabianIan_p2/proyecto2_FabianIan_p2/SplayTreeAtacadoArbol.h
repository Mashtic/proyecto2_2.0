#ifndef SPLAYTREEATACADOARBOL_H
#define SPLAYTREEATACADOARBOL_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#include "Aleatorios.h"
#include "SplayTree.h"

class SplayTreeAtacadoArbol {

public:

    // Constructores
    SplayTreeAtacadoArbol(int pTiempoDestruccion, vector<SplayTree>* pArbol)
        : arbol(pArbol), running(true), tiempoDestruccionSegundos(pTiempoDestruccion) {}

    // M�todos
    // Procesos
    void comprobarMuerto() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getVida() <= 0) {
                        (*arbol)[pos].muerto();
                        cout << "\nSplay Muerto" << endl;
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
    vector<SplayTree>* arbol;

    // Tiempos
    int tiempoDestruccionSegundos;

    // Hilo
    bool running;
};

#endif