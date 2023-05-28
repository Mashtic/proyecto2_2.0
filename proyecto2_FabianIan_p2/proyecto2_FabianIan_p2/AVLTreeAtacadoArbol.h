#ifndef AVLTREEATACADOARBOL_H
#define AVLTREEATACADOARBOL_H

#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include <cstdlib>
#include <iostream>
#include <thread>
#include <chrono>

#include "Aleatorios.h"
#include "AVLTree.h"

class AVLTreeAtacadoArbol {

public:

    // Constructores
    AVLTreeAtacadoArbol(int pTiempoDestruccion, vector<avl_tree>* pArbol)
        : arbol(pArbol), running(true), tiempoDestruccionSegundos(pTiempoDestruccion) {}

    // M�todos
    // Procesos
    void comprobarMuerto() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getVida() <= 0) {
                        (*arbol)[pos].muerto();
                        cout << "\nAVL Muerto" << endl;
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
    vector<avl_tree>* arbol;

    // Tiempos
    int tiempoDestruccionSegundos;

    // Hilo
    bool running;
};

#endif