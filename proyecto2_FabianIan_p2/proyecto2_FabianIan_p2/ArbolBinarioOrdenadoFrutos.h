#ifndef ARBOLBINARIOORDENADOFRUTOS_H
#define ARBOLBINARIOORDENADOFRUTOS_H

#include <cstdlib>
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#include "ArbolBinarioOrdenado.h"

using namespace std;

class ArbolBinarioOrdenadoFrutos {

public:

    // Constructor
    ArbolBinarioOrdenadoFrutos(int creceFrutoSeg, int tasaFruto, double frutoMinValor, double frutoMaxValor, vector<ArbolBinarioOrdenado>* pArbol)
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
    int getCrecimientoFrutosSegundos() const { return crecimientoFrutosSegundos; }
    int getFrutosCrecimientoTasa() const { return frutosCrecimientoTasa; }
    double getFrutoValorMin() const { return frutoValorMin; }
    double getFrutoValorMax() const { return frutoValorMax; }
    bool getRunning() const { return running; }

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

    // Procesos
    void naciendoFrutos() {
        if (!arbol->empty()) {
            for (int pos = 0; pos < arbol->size(); pos++) {
                if ((*arbol)[pos].getVivo()) {
                    if ((*arbol)[pos].getCrecido() && !(*arbol)[pos].enPeligro()) {
                        cout << "\nBinario Fruta nueva" << endl;
                        for (int cant = 0; cant < frutosCrecimientoTasa; cant++) {
                            (*arbol)[pos].insertar(Aleatorios::generaEnRangoValor(frutoValorMin, frutoValorMax));
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
    vector<ArbolBinarioOrdenado>* arbol;

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