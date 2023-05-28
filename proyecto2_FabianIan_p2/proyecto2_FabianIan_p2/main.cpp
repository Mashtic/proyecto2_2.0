#include "pch.h"
#include <iostream>
#include <thread>
#include <vector>

#include "Escritura.h"
#include "Lectura.h"

#include "Juego.h"

using namespace std;

// Variables (representan la entrada de la GUI)
// Generales
int tamannoMapa = 8;
int destruccionFrutoCuervo = 15;
int tasaComerCuervo = 2;
int destruccionFrutoOveja = 30;
int tasaComerOveja = 5;
int destruccionArbol = 60;

// Arboles
//Binarios
int crecimientoArbolBinario = 60;
int crecimientoFrutoBinario = 25;
int tasaFrutos = 2;
double valorMinBinarios = 0.05;
double valorMaxBinarios = 7.5;

// AVL
int crecimientoArbolAVL = 45;
int crecimientoFrutoAVL = 15;
int tasaFrutosAVL = 1;
double valorMinAVL = 0.25;
double valorMaxAVL = 6.32;

// Heap
int crecimientoArbolHeap = 75;
int crecimientoFrutoHeap = 10;
int tasaFrutosHeap = 1;
double valorMinHeap = 1.25;
double valorMaxHeap = 3.73;

// Splay
int crecimientoArbolSplay = 120;
int crecimientoFrutoSplay = 45;
int tasaFrutosSplay = 5;
double valorMinSplay = 3.25;
double valorMaxSplay = 10.32;

// Datos plagas
double probabilidadAparicionCuervo = 0.5;
int minAparicionCuervo = 0;
int maxAparicionCuervo = 1;

double probabilidadAparicionOveja = 0.7;
int minAparicionOveja = 1;
int maxAparicionOveja = 3;

double probabilidadAparicionPlaga = 0.6;
int minAparicionPlaga = 0;
int maxAparicionPlaga = 2;

// Granjero
double dinero = 0;


// Main
/*
int main() {
	
	// Vector (listas)
	// Precios
	vector<double>* precios = Lectura::cargarPrecios();

	for (int i = 0; i < precios->size(); i++) {
		cout << (*precios)[i] << endl;
	}

	string nombre = "Pedro";


	vector<double>* precios = new vector<double>; // Tamaño de 5 doubles [binarios, avls, heaps, splays, espantapajaros]
	precios->push_back(120.173);
	precios->push_back(220.242);
	precios->push_back(160.332);
	precios->push_back(100.43342);
	precios->push_back(200.56555);
	
	
	// Arboles
	vector<ArbolBinarioOrdenado>* binarios = new vector<ArbolBinarioOrdenado>;
	vector<avl_tree>* avls = new vector<avl_tree>;
	vector<Heap>* heaps = new vector<Heap>;
	vector<SplayTree>* splays = new vector<SplayTree>;

	// Plagas
	vector<Cuervo>* cuervos = new vector<Cuervo>;
	vector<Oveja>* ovejas = new vector<Oveja>;
	vector<Plaga>* plagas = new vector<Plaga>;

	// Granjero
	Granjero* granjero = new Granjero(nombre, dinero);

	// Espantapajaros
	vector<Espantapajaros>* espantapajaros = new vector<Espantapajaros>;

	// Definicion objetos
	// Binarios
	AgregarBinarios adderBinarios(binarios, tamannoMapa);
	ArbolBinarioOrdenadoCrecer binariosCrecenHilo(crecimientoArbolBinario, binarios);
	ArbolBinarioOrdenadoFrutos binariosCrecenFrutosHilo(crecimientoFrutoBinario, tasaFrutos, valorMinBinarios, valorMaxBinarios, binarios);
	ArbolBinarioOrdenadoAtacadoFrutoCuervo binarioAtacaFrutoCuervoHilo(destruccionFrutoCuervo, tasaComerCuervo, binarios);
	ArbolBinarioOrdenadoAtacadoFrutoOveja binarioAtacaFrutoOvejaHilo(destruccionFrutoOveja, tasaComerOveja, binarios);
	ArbolBinarioOrdenadoAtacadoArbol binarioAtacaArbolHilo(destruccionArbol, binarios);
	
	// AVL
	AgregarAVL adderAvl(avls, tamannoMapa);
	AVLTreeCrecer avlCrecenHilo(crecimientoArbolAVL, avls);
	AVLTreeFrutos avlCrecenFrutosHilo(crecimientoFrutoAVL, tasaFrutosAVL, valorMinAVL, valorMaxAVL, avls);
	AVLTreeAtacadoFrutoCuervo avlAtacaFrutoCuervoHilo(destruccionFrutoCuervo, tasaComerCuervo, avls);
	AVLTreeAtacadoFrutoOveja avlAtacaFrutoOvejaHilo(destruccionFrutoOveja, tasaComerOveja, avls);
	AVLTreeAtacadoArbol avlAtacaArbolHilo(destruccionArbol, avls);

	// Heaps
	AgregarHeaps adderHeaps(heaps, tamannoMapa);
	HeapTreeCrecer heapsCrecenHilo(crecimientoArbolHeap, heaps);
	HeapTreeFrutos heapsCrecenFrutosHilo(crecimientoFrutoHeap, tasaFrutosHeap, valorMinHeap, valorMaxHeap, heaps);
	HeapTreeAtacadoFrutoCuervo heapsAtacaFrutoCuervoHilo(destruccionFrutoCuervo, tasaComerCuervo, heaps);
	HeapTreeAtacadoFrutoOveja heapsAtacaFrutoOvejaHilo(destruccionFrutoOveja, tasaComerOveja, heaps);
	HeapTreeAtacadoArbol heapsAtacaArbolHilo(destruccionArbol, heaps);

	// Splay
	AgregarSplay adderSplay(splays, tamannoMapa);
	SplayTreeCrecer splayCrecenHilo(crecimientoArbolSplay, splays);
	SplayTreeFrutos splayCrecenFrutosHilo(crecimientoFrutoSplay, tasaFrutosSplay, valorMinSplay, valorMaxSplay, splays);
	SplayTreeAtacadoFrutoCuervo splayAtacaFrutoCuervoHilo(destruccionFrutoCuervo, tasaComerCuervo, splays);
	SplayTreeAtacadoFrutoOveja splayAtacaFrutoOvejaHilo(destruccionFrutoOveja, tasaComerOveja, splays);
	SplayTreeAtacadoArbol splayAtacaArbolHilo(destruccionArbol, splays);

	// Genera Plagas
	GeneraCuervo generaCuervo(probabilidadAparicionCuervo, minAparicionCuervo, maxAparicionCuervo, tamannoMapa, cuervos);
	GeneraOveja generaOveja(probabilidadAparicionOveja, minAparicionOveja, maxAparicionOveja, tamannoMapa, ovejas);
	GeneraPlaga generaPlaga(probabilidadAparicionPlaga, minAparicionPlaga, maxAparicionPlaga, tamannoMapa, plagas);

	// Juego
	Juego juego(binarios, avls, heaps, splays, cuervos, plagas, ovejas, granjero, espantapajaros, precios);

	// Escribir la info del juego
	Escritura::crearArchivoBinarios(binariosCrecenHilo, binariosCrecenFrutosHilo);
	Escritura::crearArchivoAvls(avlCrecenHilo, avlCrecenFrutosHilo);
	Escritura::crearArchivoHeaps(heapsCrecenHilo, heapsCrecenFrutosHilo);
	Escritura::crearArchivoSplays(splayCrecenHilo, splayCrecenFrutosHilo);

	Escritura::crearTodosArchivosPlagas(generaPlaga, generaCuervo, generaOveja);

	Escritura::crearArchivosPrecios(precios);

	// Hilos
	// Binarios
	thread t0(&ArbolBinarioOrdenadoCrecer::run, &binariosCrecenHilo);
	thread t1(&ArbolBinarioOrdenadoFrutos::run, &binariosCrecenFrutosHilo);
	thread t2(&ArbolBinarioOrdenadoAtacadoFrutoCuervo::run, &binarioAtacaFrutoCuervoHilo);
	thread t3(&ArbolBinarioOrdenadoAtacadoFrutoOveja::run, &binarioAtacaFrutoOvejaHilo);
	thread t4(&ArbolBinarioOrdenadoAtacadoArbol::run, &binarioAtacaArbolHilo);
	thread t5(&AgregarBinarios::run, &adderBinarios); // No existiría, es solo para las pruebas

	// AVL
	thread t10(&AVLTreeCrecer::run, &avlCrecenHilo);
	thread t11(&AVLTreeFrutos::run, &avlCrecenFrutosHilo);
	thread t12(&AVLTreeAtacadoFrutoCuervo::run, &avlAtacaFrutoCuervoHilo);
	thread t13(&AVLTreeAtacadoFrutoOveja::run, &avlAtacaFrutoOvejaHilo);
	thread t14(&AVLTreeAtacadoArbol::run, &avlAtacaArbolHilo);
	thread t15(&AgregarAVL::run, &adderAvl);

	// Heap
	thread t20(&HeapTreeCrecer::run, &heapsCrecenHilo);
	thread t21(&HeapTreeFrutos::run, &heapsCrecenFrutosHilo);
	thread t22(&HeapTreeAtacadoFrutoCuervo::run, &heapsAtacaFrutoCuervoHilo);
	thread t23(&HeapTreeAtacadoFrutoOveja::run, &heapsAtacaFrutoOvejaHilo);
	thread t24(&HeapTreeAtacadoArbol::run, &heapsAtacaArbolHilo);
	thread t25(&AgregarHeaps::run, &adderHeaps);

	// Splay
	thread t30(&SplayTreeCrecer::run, &splayCrecenHilo);
	thread t31(&SplayTreeFrutos::run, &splayCrecenFrutosHilo);
	thread t32(&SplayTreeAtacadoFrutoCuervo::run, &splayAtacaFrutoCuervoHilo);
	thread t33(&SplayTreeAtacadoFrutoOveja::run, &splayAtacaFrutoOvejaHilo);
	thread t34(&SplayTreeAtacadoArbol::run, &splayAtacaArbolHilo);
	thread t35(&AgregarSplay::run, &adderSplay);

	// Genera Plagas
	thread t40(&GeneraCuervo::run, &generaCuervo);
	thread t41(&GeneraOveja::run, &generaOveja);
	thread t42(&GeneraPlaga::run, &generaPlaga);

	// Juego
	thread t50(&Juego::run, &juego);

	// Joins
	t0.join();
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();

	t10.join();
	t11.join();
	t12.join();
	t13.join();
	t14.join();
	t15.join();

	t20.join();
	t21.join();
	t22.join();
	t23.join();
	t24.join();
	t25.join();

	t30.join();
	t31.join();
	t32.join();
	t33.join();
	t34.join();
	t35.join();

	t40.join();
	t41.join();
	t42.join();

	t50.join();
	

	return 0;
}
*/