#ifndef SPLAYTREE_H
#define SPLAYTREE_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#include "Aleatorios.h"

using namespace std;

struct s//node declaration
{
    double k;
    s* lch;
    s* rch;
};

class SplayTree
{
public:
    // Estructura
    s* raiz;

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

    // Construtor
    SplayTree(int posX, int posY) {
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

    // Metodos
    s* RR_Rotate(s* k2);
    s* LL_Rotate(s* k2);
    s* Splay(double key, s* root);
    s* New_Node(double key);
    s* Insert(double key, s* root);
    s* Delete(double key, s* root);
    s* Search(double key, s* root); //seraching
    void InOrder(s* root); //inorder traversal
    s* FindMaxNode(s* root);
    int CountNodes(s* root);

    // Sets
    void setPosX(int posX) {
        pos[0] = posX;
    }

    void setPosY(int posY) {
        pos[1] = posY;
    }

    // Gets
    string GetNodesAsString(s* root)
    {
        string result;

        if (root != nullptr)
        {
            result += to_string(root->k); // Convertir el valor del nodo a string

            // Recorrer el subárbol izquierdo
            string leftSubtree = GetNodesAsString(root->lch);
            if (!leftSubtree.empty())
            {
                result += "\t";
                result += leftSubtree;
            }

            // Recorrer el subárbol derecho
            string rightSubtree = GetNodesAsString(root->rch);
            if (!rightSubtree.empty())
            {
                result += "\t";
                result += rightSubtree;
            }
        }

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
        info += to_string(vivo) + "\t";
        info += to_string(frutosVendidos) + "\t";
        info += to_string(frutosPerdidos) + "\t";
        info += GetNodesAsString(raiz) + "\n";
        return info;
    }

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

    void muerto() {
        vivo = false;
    }

    // M�todos
    void borrarArbol(s* nodo) {
        if (nodo == nullptr) {
            return; // Si el nodo es nulo, no hay nada que borrar
        }

        // Recursivamente borra los subárboles izquierdo y derecho
        borrarArbol(nodo->lch);
        borrarArbol(nodo->rch);

        delete nodo; // Borra el nodo actual
    }

    double sumarClaves(s* nodo) {
        if (nodo == nullptr) {
            return 0.0; // Si el nodo es nulo, retorna 0
        }

        double suma = nodo->k; // Suma la clave del nodo actual

        // Recursivamente suma las claves de los subárboles izquierdo y derecho
        suma += sumarClaves(nodo->lch);
        suma += sumarClaves(nodo->rch);

        return suma;
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
        if (CountNodes(raiz) > 0) {
            s* podrido = FindMaxNode(raiz);
            raiz = Delete(podrido->k, raiz);
            aumentaFrutosPerdidos();
        }
        reiniciarDestruccionFruto();
    }

    // Vender frutos
    double frutoVender() {
        if (CountNodes(raiz) > 0) {
            double precio = FindMaxNode(raiz)->k;
            raiz = Delete(precio, raiz);
            aumentaFrutosPerdidos();
        }
        return 0;
    }

    double frutosVender() {
        double total = sumarClaves(raiz);
        borrarArbol(raiz);
        raiz = nullptr;
        return total;
    }
};

class AgregarSplay {

public:

    // Constructores
    AgregarSplay(vector<SplayTree>* pArbol, int pTamannoMapa)
        : arbol(pArbol), running(true), maxMapa(pTamannoMapa){}

    // M�todos

    void creaArboles() {
        for (int cant = 0; cant < 1; cant++) {
            int posX = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            int posY = static_cast<int>(rand()) * static_cast<int>(maxMapa - 1) / RAND_MAX;
            cout << "Splay Ha nacido" << endl;
            arbol->push_back(SplayTree(posX, posY));
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
    vector<SplayTree>* arbol;
    int maxMapa;

    // Hilo
    bool running;
};

#endif