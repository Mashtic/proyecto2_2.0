#ifndef LECTURA_H
#define LECTURA_H

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "Granjero.h"
#include "Espantapajaros.h"

#include "ArbolBinarioOrdenado.h"
#include "ArbolBinarioOrdenadoAtacadoArbol.h"
#include "ArbolBinarioOrdenadoAtacadoFrutoCuervo.h"
#include "ArbolBinarioOrdenadoAtacadoFrutoOveja.h"
#include "ArbolBinarioOrdenadoCrecer.h"
#include "ArbolBinarioOrdenadoFrutos.h"

#include "AVLTree.h"
#include "AVLTreeAtacadoArbol.h"
#include "AVLTreeAtacadoFrutoCuervo.h"
#include "AVLTreeAtacadoFrutoOveja.h"
#include "AVLTreeCrecer.h"
#include "AVLTreeFrutos.h"

#include "HeapTree.h"
#include "HeapTreeAtacadoArbol.h"
#include "HeapTreeAtacadoFrutoCuervo.h"
#include "HeapTreeAtacadoFrutoOveja.h"
#include "HeapTreeCrecer.h"
#include "HeapTreeFrutos.h"

#include "SplayTree.h"
#include "SplayTreeAtacadoArbol.h"
#include "SplayTreeAtacadoFrutoCuervo.h"
#include "SplayTreeAtacadoFrutoOveja.h"
#include "SplayTreeCrecer.h"
#include "SplayTreeFrutos.h"

#include "GeneraCuervo.h"
#include "GeneraOveja.h"
#include "GeneraPlaga.h"

using namespace std;

class Lectura {

public:

    // Proceso
    static string readFile(const string& filename) {
        std::ifstream file(filename);
        if (!file) {
            throw std::runtime_error("Failed to open file: " + filename);
        }

        std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        file.close();

        return content;
    }

    // Separación de texto
    static vector<string> * separarPorTabs(const string& texto) {
        vector<string> * elementos = new vector<string>;
        size_t posInicio = 0;
        size_t posFin = texto.find("\t");

        while (posFin != string::npos) {
            elementos->push_back(texto.substr(posInicio, posFin - posInicio));
            posInicio = posFin + 1;
            posFin = texto.find("\t", posInicio);
        }

        elementos->push_back(texto.substr(posInicio));

        return elementos;
    }

    static vector<string> * separarPorSaltosDeLinea(const string& texto) {
        vector<string>* elementos = new vector<string>;
        size_t posInicio = 0;
        size_t posFin = texto.find("\n");

        while (posFin != string::npos) {
            elementos->push_back(texto.substr(posInicio, posFin - posInicio));
            posInicio = posFin + 1;

            if (texto[posInicio] == '\r')
                posInicio++;

            posFin = texto.find("\n", posInicio);
        }

        elementos->push_back(texto.substr(posInicio));

        return elementos;
    }
    
    // Cargar objetos
    static vector<double> * cargarPrecios() {
        string info = readFile("Precios.txt");
        vector<string> *listaTexto = separarPorSaltosDeLinea(info);
        vector<double>* listaDoubles = new vector<double>;
        for (int i = 0; i < listaTexto->size(); i++) {
            listaDoubles->push_back(stod((*listaTexto)[i]));
        }
        return listaDoubles;
    }
    
    // Plagas
    // Plaga
    static vector<Plaga>* cargarPlagas() {
        string info = readFile("Plagas.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        vector<Plaga>* listaPlagas = new vector<Plaga>;
        for (int i = 3; i < listaTexto->size(); i++) {
            vector<string>* plaga = separarPorTabs((*listaTexto)[i]);
            listaPlagas->push_back(Plaga(stoi((*plaga)[0]), stoi((*plaga)[1])));
        }
        return listaPlagas;
    }

    static GeneraPlaga* cargarGeneraPlagas(vector<Plaga>* listaPlagas) {
        string info = readFile("Plagas.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        return new GeneraPlaga(stod((*listaTexto)[0]), stoi((*listaTexto)[1]), stoi((*listaTexto)[2]), 7, listaPlagas);
    }

    // Cuervo
    static vector<Cuervo>* cargarCuervos() { // Primero esta, luego la siguiente para que pase el objeto
        string info = readFile("Cuervos.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        vector<Cuervo>* listaCuervos = new vector<Cuervo>;
        for (int i = 3; i < listaTexto->size(); i++) {
            vector<string>* cuervo = separarPorTabs((*listaTexto)[i]);
            listaCuervos->push_back(Cuervo(stoi((*cuervo)[0]), stoi((*cuervo)[1])));
        }
        return listaCuervos;
    }

    static GeneraCuervo* cargarGeneraCuervos(vector<Cuervo>* listaCuervos) {
        string info = readFile("Cuervos.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        return new GeneraCuervo(stod((*listaTexto)[0]), stoi((*listaTexto)[1]), stoi((*listaTexto)[2]), 7, listaCuervos);
    }

    // Ovejas
    static vector<Oveja>* cargarOvejas() {
        string info = readFile("Ovejas.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        vector<Oveja>* listaOvejas = new vector<Oveja>;
        for (int i = 3; i < listaTexto->size(); i++) {
            vector<string>* cuervo = separarPorTabs((*listaTexto)[i]);
            listaOvejas->push_back(Oveja(stoi((*cuervo)[0]), stoi((*cuervo)[1])));
        }
        return listaOvejas;
    }

    static GeneraOveja* cargarGeneraOvejas(vector<Oveja>* listaOvejas) {
        string info = readFile("Ovejas.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        return new GeneraOveja(stod((*listaTexto)[0]), stoi((*listaTexto)[1]), stoi((*listaTexto)[2]), 7, listaOvejas);
    }

    static vector<ArbolBinarioOrdenado>* cargarBinarios() {
        string info = readFile("Binarios.txt");
        vector<string>* listaTexto = separarPorSaltosDeLinea(info);
        vector<ArbolBinarioOrdenado>* binarios = new vector<ArbolBinarioOrdenado>;
        for (int i = 1; i < listaTexto->size(); i++) {
            vector<string>* binario = separarPorTabs((*listaTexto)[i]);
            ArbolBinarioOrdenado arbol (stoi((*binario)[0]), stoi((*binario)[1]), stoi((*binario)[2]), stoi((*binario)[3]), 
                stoi((*binario)[4]), stoi((*binario)[5]), stoi((*binario)[6]), stoi((*binario)[7]),
                stoi((*binario)[8]), stoi((*binario)[9]), stoi((*binario)[10]));
            for (int j = 11; j < binario->size(); j++) {
                arbol.insertar(stoi((*binario)[j]));
            }
            binarios->push_back(arbol);
        }
        return binarios;
    }
};

#endif