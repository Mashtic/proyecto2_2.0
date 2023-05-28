#ifndef AVLTREE_H
#define AVLTREE_H

#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include <cstdlib>
#include <iostream>
#include <thread>
#include <chrono>

#include "Aleatorios.h"

#define pow2(n) (1 << (n))

using namespace std;

struct avl {
    double d;
    struct avl* l;
    struct avl* r;
};

class avl_tree {
public:
    int height(avl*);
    int difference(avl*);
    avl* rr_rotat(avl*);
    avl* ll_rotat(avl*);
    avl* lr_rotat(avl*);
    avl* rl_rotat(avl*);
    avl* balance(avl*);
    avl* insert(avl*, double);
    void show(avl*, double);
    void inorder(avl*);
    void preorder(avl*);
    void postorder(avl*);
    int countNodes(avl* root);
    avl* findMaxValueNode(avl* root);
    avl* deleteNode(avl* root, double v);

    avl_tree(int posX, int posY) {
        r = nullptr;
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

    // Atributos
    avl* r;

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

    // Metodos
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
        info += to_string(vivo) + "\t";
        info += to_string(frutosVendidos) + "\t";
        info += to_string(frutosPerdidos) + "\t";
        info += GetNodesAsString(r) + "\n";
        return info;
    }

    // Procesos
    string GetNodesAsString(avl* root) {
        ostringstream oss;
        InOrderToString(root, oss);
        return oss.str();
    }

    void InOrderToString(avl* root, ostringstream& oss) {
        if (root != nullptr) {
            InOrderToString(root->l, oss);
            oss << root->d << "\t";
            InOrderToString(root->r, oss);
        }
    }

    avl* deleteLastNode(avl* root) {
        if (root == nullptr)
            return root;

        if (root->l == nullptr && root->r == nullptr) {
            delete root;
            return nullptr;
        }

        avl* parent = nullptr;
        avl* current = root;

        while (current->r != nullptr) {
            parent = current;
            current = current->r;
        }

        if (parent == nullptr)
            root = root->l;
        else
            parent->r = current->l;

        delete current;

        root = balance(root);

        return root;
    }

    void muerto() {
        vivo = false;
    }

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
        int cantFrutos = countNodes(r);
        if (cantFrutos > 0) {
            double precio = findMaxValueNode(r)->d;
            r = deleteLastNode(r);
            aumentaFrutosPerdidos();
        }
        reiniciarDestruccionFruto();
    }

    // Vender frutos
    double frutoVender() {
        if (countNodes(r) > 0) {
            double precio = findMaxValueNode(r)->d;
            avl* pnt = deleteNode(r, precio);
            aumentaFrutosVendidos();
            return precio;
        }
        return 0;
    }

    double calcularSuma(avl* raiz) {
        if (raiz == nullptr) {
            return 0.0;
        }

        double suma = raiz->d;
        suma += calcularSuma(raiz->l);
        suma += calcularSuma(raiz->r);

        return suma;
    }

    double frutosVender() {
        double total = calcularSuma(r);
        eliminarNodos(r);
        return total;
    }

    avl* eliminarNodos(avl* raiz) {
        if (raiz == nullptr) {
            return nullptr;
        }

        raiz->l = eliminarNodos(raiz->l);
        raiz->r = eliminarNodos(raiz->r);

        delete raiz;
        r = nullptr;
        return nullptr;
    }

};

class AgregarAVL {

public:

    // Constructores
    AgregarAVL(vector<avl_tree>* pArbol, int pTamannoMapa)
        : arbol(pArbol), running(true), maxMapa(pTamannoMapa) {}

    // M�todos

    void creaArboles() {
        for (int cant = 0; cant < 1; cant++) {
            int posX = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            int posY = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            cout << "AVL Ha nacido" << endl;
            arbol->push_back(avl_tree(posX, posY));
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
    vector<avl_tree>* arbol;
    int maxMapa;

    // Hilo
    bool running;
};

#endif