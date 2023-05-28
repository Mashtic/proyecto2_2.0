#ifndef AVLTREEFRUTOS_H
#define AVLTREEFRUTOS_H

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

class AVLTreeFrutos {

public:

    // Constructor
    AVLTreeFrutos(int creceFrutoSeg, int tasaFruto, double frutoMinValor, double frutoMaxValor, vector<avl_tree>* pArbol)
        : crecimientoFrutosSegundos(creceFrutoSeg),
        frutosCrecimientoTasa(tasaFruto),
        frutoValorMin(frutoMinValor),
        frutoValorMax(frutoMaxValor),
        arbol(pArbol),
        running(true)
    {
    }

    // M�todos
    // Gets
    string getInfoString() {
        string info = to_string(crecimientoFrutosSegundos) + "\t";
        info += to_string(frutosCrecimientoTasa) + "\t";
        info += to_string(frutoValorMin) + "\t";
        info += to_string(frutoValorMax) + "\n";
        for (int i = 0; i < arbol->size(); i++) {
            if ((*arbol)[i].getVivo()) {
                info += (*arbol)[i].getInfoString();
            }
        }
        return info;
    }

    int getCrecimientoFrutosSegundos() const { return crecimientoFrutosSegundos; }
    int getFrutosCrecimientoTasa() const { return frutosCrecimientoTasa; }
    double getFrutoValorMin() const { return frutoValorMin; }
    double getFrutoValorMax() const { return frutoValorMax; }
    bool getRunning() const { return running; }

    // Procesos
    void naciendoFrutos() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getCrecido() && !(*arbol)[pos].enPeligro()) {
                        cout << "\nAVL Fruta nueva" << endl;
                        for (int cant = 0; cant < frutosCrecimientoTasa; cant++) {
                            (*arbol)[pos].r = (*arbol)[pos].insert((*arbol)[pos].r, Aleatorios::generaEnRangoValor(frutoValorMin, frutoValorMax));
                        }

                        (*arbol)[pos].inorder((*arbol)[pos].r);
                        if ((*arbol)[pos].countNodes((*arbol)[pos].r) >= 5) {
                            if (pos % 2 == 0) {
                                (*arbol)[pos].siendoAtacadoFrutoCuervo();
                            }
                            else {
                                cout << "AVL Vendidos: " << (*arbol)[pos].frutosVender() << endl;
                            }
                        }
                    }
                }
            }
        }
    }

    void creciendoFrutos() {
        this_thread::sleep_for(chrono::seconds(crecimientoFrutosSegundos));
        naciendoFrutos();
    }

    // Hilo
    void reanudarHilo() { running = true; }
    void pausarHilo() { running = false; }

    void run() {
        while (true) {
            this_thread::sleep_for(chrono::milliseconds(1));
            while (running) {
                creciendoFrutos();
            }
        }
    }

private:

    // Par�metros
    // Estructura de datos
    vector<avl_tree>* arbol;

    // Crecimiento
    int crecimientoFrutosSegundos;
    int frutosCrecimientoTasa;

    // Valores frutos
    double frutoValorMin;
    double frutoValorMax;

    // Hilo
    bool running;
};

#endif