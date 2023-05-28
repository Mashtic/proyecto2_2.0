#ifndef HEAPTREE_H
#define HEAPTREE_H

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

using namespace std;

struct Heap {

    // Miembros
    double * arbol;
    int cantidad; // De datos
    int tamannoMax; // El tamaño máximo de datos

    // Valores
    int pos[2];
    int vida;
    int crecimiento;

    // Indicadores
    bool crecido;
    bool atacadoArbol;
    bool atacadoFrutoCuervo;
    bool atacadoFrutoOveja;
    int destruccionFruto; // 0 hasta 100
    bool vivo;

    // Conteo datos
    int frutosVendidos;
    int frutosPerdidos;

    // Constructor
    Heap(int pTamannoMax, int posX, int posY){
        arbol = new double[pTamannoMax];
        tamannoMax = pTamannoMax;
        cantidad = 0;
        pos[0] = posX;
        pos[1] = posY;
        vida = 100;
        crecimiento = 0;
        crecido = false;
        atacadoArbol = false;
        atacadoFrutoCuervo = false;
        atacadoFrutoOveja = false;
        vivo = true;
        destruccionFruto = 0;
        frutosVendidos = 0;
        frutosPerdidos = 0;
    }

    // Funciones para acceder a los nodos del heap
    int padre(int pos);
    int hijoIzq(int pos);
    int hijoDer(int pos);

    // Funciones de procesos
    bool empiezaNivel(int pos);
    void permutar(int posPadre, int posHijo);

    // Funciones del trabajo
    void insertar(double valor);
    void eliminar();
    void imprimir();
    string getInfoString();

    void muerto() {
        vivo = false;
    }

    // M�todos
    // Gets
    int getPosX() const { return pos[0]; }
    int getPosY() const { return pos[1]; }
    int getVida() const { return vida; }
    int getCrecimiento() const { return crecimiento; }
    bool getCrecido() const { return crecido; }
    bool getAtacadoArbol() const { return atacadoArbol; }
    bool getAtacadoFrutoCuervo() const { return atacadoFrutoCuervo; }
    bool getAtacadoFrutoOveja() const { return atacadoFrutoOveja; }
    int getFrutosVendidos() const { return frutosVendidos; }
    int getFrutosPerdidos() const { return frutosPerdidos; }
    bool getVivo() const { return vivo; }

    // Sets
    void aumentaCrecimiento() {
        if (crecimiento < 100)
            crecimiento++;
    }

    void disminuirVida() {
        if (vida > 0)
            vida--;
    }

    void establecerCrecido() {
        crecido = true;
    }

    void aumentaFrutosVendidos() {
        frutosVendidos++;
    }

    void aumentaFrutosPerdidos() {
        frutosPerdidos++;
    }

    bool destruccionFrutoCompleta() {
        return 100 <= destruccionFruto;
    }

    void reiniciarDestruccionFruto() {
        destruccionFruto = 0;
    }

    void aumentaDestruccionFruto() {
        destruccionFruto++;
    }

    void siendoAtacadoArbol() {
        atacadoArbol = true;
    }

    void siendoAtacadoFrutoCuervo() {
        atacadoFrutoCuervo = true;
    }

    void siendoAtacadoFrutoOveja() {
        atacadoFrutoOveja = true;
    }

    void dejarAtacadoArbol() {
        atacadoArbol = false;
    }

    void dejarAtacadoFrutoCuervo() {
        atacadoFrutoCuervo = false;
    }

    void dejarAtacadoFrutoOveja() {
        atacadoFrutoOveja = false;
    }

    bool enPeligro() {
        return atacadoArbol || atacadoFrutoOveja || atacadoFrutoCuervo;
    }

    void perderFruto() {
        if (cantidad > 0) {
            eliminar();
            aumentaFrutosPerdidos();
        }
        reiniciarDestruccionFruto();
    }

    // Vender frutos
    double sumarTotal() {
        double suma = 0;
        for (int i = 1; i <= cantidad; ++i) {
            suma += arbol[i];
        }
        return suma;
    }

    void eliminarNodos() {
        for (int i = 1; i <= cantidad; ++i) {
            arbol[i] = 0.0;
        }
        cantidad = 0;
    }

    double frutoVender() {
        if (cantidad > 0) {
            double precio = arbol[0];
            eliminar();
            aumentaFrutosPerdidos();
        }
        return 0;
    }

    double frutosVender() {
        double total = sumarTotal();
        eliminarNodos();
        return total;
    }
};

class AgregarHeaps {

public:

    // Constructores
    AgregarHeaps(vector<Heap>* pArbol, int pTamannoMapa)
        : arbol(pArbol), running(true), maxMapa(pTamannoMapa){}

    // M�todos

    void creaArboles() {
        for (int cant = 0; cant < 1; cant++) {
            int posX = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            int posY = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            cout << "Heap Ha nacido" << endl;
            arbol->push_back(Heap(100, posX, posY));
        }
    }

    // Hilo
    void reanudarHilo() { running = true; }
    void pausarHilo() { running = false; }
    bool getRunning() const { return running; }

    void run() {
        while (true) {
            while (running) {
                creaArboles();
                this_thread::sleep_for(chrono::seconds(60));
            }
        }
    }

private:

    // Par�metros
    // Estructura de datos
    vector<Heap>* arbol;
    int maxMapa;

    // Hilo
    bool running;
};

#endif