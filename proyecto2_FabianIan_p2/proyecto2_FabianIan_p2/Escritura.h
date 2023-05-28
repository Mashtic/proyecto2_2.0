#ifndef ESCRITURA_H
#define ESCRITURA_H

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

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

 class Escritura {

 public:
     // General
     static void writeFile(const string& filename, const string& content) {
         ofstream file(filename, ios::out);

         if (file.is_open()) {
             file << content;
             file.close();
             cout << "Archivo guardado exitosamente: " << filename << endl;
         }
         else {
             cout << "No se pudo abrir el archivo: " << filename << endl;
         }
     }

     // Arboles
     static void crearArchivoBinarios(ArbolBinarioOrdenadoCrecer crecen, ArbolBinarioOrdenadoFrutos frutos) {
         string info = crecen.getInfoString();
         info += frutos.getInfoString();
         writeFile("Binarios.txt", info);
     }

     static void crearArchivoAvls(AVLTreeCrecer crecen, AVLTreeFrutos frutos) {
         string info = crecen.getInfoString();
         info += frutos.getInfoString();
         writeFile("Avls.txt", info);
     }

     static void crearArchivoHeaps(HeapTreeCrecer crecen, HeapTreeFrutos frutos) {
         string info = crecen.getInfoString();
         info += frutos.getInfoString();
         writeFile("Heaps.txt", info);
     }

     static void crearArchivoSplays(SplayTreeCrecer crecen, SplayTreeFrutos frutos) {
         string info = crecen.getInfoString();
         info += frutos.getInfoString();
         writeFile("Splays.txt", info);
     }

     // Plagas
     static void crearArchivoPlagas(GeneraPlaga plagas) {
         writeFile("Plagas.txt", plagas.getInfoString());
     }

     static void crearArchivoCuervos(GeneraCuervo plagas) {
         writeFile("Cuervos.txt", plagas.getInfoString());
     }

     static void crearArchivoOvejas(GeneraOveja plagas) {
         writeFile("Ovejas.txt", plagas.getInfoString());
     }

     static void crearTodosArchivosPlagas(GeneraPlaga plagas, GeneraCuervo cuervos, GeneraOveja ovejas) {
         crearArchivoPlagas(plagas);
         crearArchivoCuervos(cuervos);
         crearArchivoOvejas(ovejas);
     }

     // Precios
     static void crearArchivosPrecios(vector<double>* precios) {
         string info = to_string((*precios)[0]) + "\n";
         info += to_string((*precios)[1]) + "\n";
         info += to_string((*precios)[2]) + "\n";
         info += to_string((*precios)[3]) + "\n";
         info += to_string((*precios)[4]);
         writeFile("Precios.txt", info);
     }
 };

#endif