#ifndef ARBOLBINARIOORDENADO_H
#define ARBOLBINARIOORDENADO_H

#include <cstdlib>
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#include "Aleatorios.h"

using namespace std;

struct Nodo {
    double valor;
    Nodo* izquierdo;
    Nodo* derecho;

    Nodo(double valor) {
        this->valor = valor;
        izquierdo = nullptr;
        derecho = nullptr;
    }
};

struct ArbolBinarioOrdenado {

    // Atributos
    Nodo* raiz;

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

    // Constructores
    ArbolBinarioOrdenado(int posX, int posY) {
        raiz = nullptr;
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

    ArbolBinarioOrdenado(int posX, int posY, int vida, int crecimiento, bool crecido,
        bool atacadoArbol, bool atacadoFrutoCuervo, bool atacadoFrutoOveja,
        int destruccionFruto, int frutosVendidos, int frutosPerdidos) {
        raiz = nullptr;
        pos[0] = posX;
        pos[1] = posY;
        this->vida = vida;
        this->crecimiento = crecimiento;
        this->crecido = crecido;
        this->atacadoArbol = atacadoArbol;
        this->atacadoFrutoCuervo = atacadoFrutoCuervo;
        this->atacadoFrutoOveja = atacadoFrutoOveja;
        this->vivo = true;
        this->destruccionFruto = destruccionFruto;
        this->frutosVendidos = frutosVendidos;
        this->frutosPerdidos = frutosPerdidos;
    }


    // M�todos
    Nodo* insertarNodoRecursivo(Nodo* nodo, double valor);
    void insertar(double valor);
    void preorden(Nodo* nodo);
    void inorden(Nodo* nodo);
    void postorden(Nodo* nodo);
    bool buscar(double valor);
    int altura(Nodo* nodo);
    int cantidadNodos(Nodo* nodo);
    double sumatoriaValores(Nodo* nodo);
    Nodo* encontrarMaximo(Nodo* nodo);
    Nodo* encontrarMinimo(Nodo* raiz);
    Nodo* eliminarNodo(Nodo* raiz, Nodo* nodoEliminar);
    Nodo* eliminarNodo(Nodo* raiz, double valor);
    double precioLimpio(Nodo * nodo);

    // Sets
    void setPosX(int posX) {
        pos[0] = posX;
    }

    void setPosY(int posY) {
        pos[1] = posY;
    }

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
    
    string treeToString(Nodo* root, int depth = 0) {
        string result;

        if (root == nullptr)
            return result;

        // Convertir el valor del nodo a string
        result += to_string(root->valor);

        // Agregar tabulaciones según la profundidad
        for (int i = 0; i < depth; i++)
            result += "\t";

        // Recorrer el subárbol izquierdo
        result += treeToString(root->izquierdo, depth + 1);

        // Recorrer el subárbol derecho
        result += treeToString(root->derecho, depth + 1);

        return result;
    }

    string getInfoString() {
        string info = to_string(pos[0]) + "\t";
        info += to_string(pos[1]) + "\t";
        info += to_string(vida) + "\t";
        info += to_string(crecimiento) + "\t";
        info += to_string(crecido) + "\t";
        info += to_string(atacadoArbol) + "\t";
        info += to_string(atacadoFrutoCuervo) + "\t";
        info += to_string(atacadoFrutoOveja) + "\t";
        info += to_string(destruccionFruto) + "\t";
        info += to_string(frutosVendidos) + "\t";
        info += to_string(frutosPerdidos) + "\t";
        info += treeToString(raiz) + "\n";
        return info;
    }

    void muerto() {
        vivo = false;
    }

    // M�todos
    Nodo* encontrarSucesor(Nodo* nodo);
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
        if (cantidadNodos(raiz) > 0) {
            Nodo* podrido = encontrarMaximo(raiz);
            Nodo* fruto = eliminarNodo(raiz, podrido);
            aumentaFrutosPerdidos();
        }
        reiniciarDestruccionFruto();
    }

    // Vender frutos
    double frutoVender() {
        if (cantidadNodos(raiz) > 0) {
            double precio = encontrarMaximo(raiz)->valor;
            Nodo* fruto = eliminarNodo(raiz, precio);
            aumentaFrutosPerdidos();
        }
        return 0;
    }

    double frutosVender() {
        double total = sumatoriaValores(raiz);
        deleteTree(raiz);
        return total;
    }

    void deleteTree(Nodo* root) {
        if (root == nullptr) {
            return;
        }

        deleteTree(root->izquierdo);
        deleteTree(root->derecho);

        raiz = nullptr;
        delete root;
    }
};

class AgregarBinarios {

public:

    // Constructores
    AgregarBinarios(vector<ArbolBinarioOrdenado>* pArbol, int pTamannoMapa)
        : arbol(pArbol), running(true), maxMapa(pTamannoMapa) {}

    // M�todos
    
    void creaArboles() {
        for (int cant = 0; cant < 1; cant++) {
            int posX = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            int posY = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            cout << "Binario Ha nacido" << endl;
            arbol->push_back(ArbolBinarioOrdenado(posX, posY));
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
    vector<ArbolBinarioOrdenado>* arbol;
    int maxMapa;

    // Hilo
    bool running;
};

#endif