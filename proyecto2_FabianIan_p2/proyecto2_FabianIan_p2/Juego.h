#ifndef JUEGO_H
#define JUEGO_H

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


class Juego {

public:

	// Constructor
	Juego(vector<ArbolBinarioOrdenado>* pBinarios, vector<avl_tree> * pAvls, vector<Heap>* pHeaps, vector<SplayTree>* pSplays, 
		vector<Cuervo> * pCuervos, vector<Plaga> * pPlagas, vector<Oveja> * pOvejas,
		Granjero* pGranjero, vector<Espantapajaros>* pEspantapajaros, vector<double> * pPrecios) {
		granjero = pGranjero;
		binarios = pBinarios;
		avls = pAvls;
		heaps = pHeaps;
		splays = pSplays;
		cuervos = pCuervos;
		plagas = pPlagas;
		ovejas = pOvejas;
		espantapajaros = pEspantapajaros;
		running = true;
		precios = pPrecios;
	}

	// Rangos 
	bool compruebaChoque(int objetoX, int objetoY, int objeto2X, int objeto2Y) {
		if (objetoX == objeto2X && objetoY == objeto2Y) {
			return true;
		}
		return false;
	}

	bool compruebaChoqueGranjero(int plagaX, int plagaY) {
		if (plagaX == granjero->getX() && plagaY == granjero->getY()) {
			return true;
		}
		return false;
	}

	bool rangoPlagaAtacar(int plagaXoY, int arbolXoY) { // Solamente X o Y en cada uno
		// arbolXoY - rangoAtaque <= plagaXoY <= arbolXoY + rangoAtaque
		if (((arbolXoY - rangoAtaquePlagas) <= plagaXoY) && (plagaXoY <= (arbolXoY + rangoAtaquePlagas))) {
			return true;
		}
		return false;
	}

	bool rangoEspantapajarosProteger(int plagaX, int plagaY) {
		if (!espantapajaros->empty()) {
			for (int cant = 0; cant < espantapajaros->size(); cant++) {
				Espantapajaros* espanta = &(*espantapajaros)[cant];
				if (((espanta->getPosX() - rangoCoberturaEspantapajaros) <= plagaX) && (plagaX <= (espanta->getPosX() + rangoCoberturaEspantapajaros))
					&& ((espanta->getPosY() - rangoCoberturaEspantapajaros) <= plagaY) && (plagaY <= (espanta->getPosY() + rangoCoberturaEspantapajaros))) {
					return true;
				}
			}
		}
		return false;
	}

	// Detecta colisiones plagas
	void cambiaColisionesPlagas() {
		if (!ovejas->empty()) {
			for (int cant = 0; cant < ovejas->size(); cant++) {
				Oveja* ovejaPos = &(*ovejas)[cant];
				if (!plagas->empty()) {
					for (int cant = 0; cant < plagas->size(); cant++) {
						Plaga* plagaPos = &(*plagas)[cant];
						if ((compruebaChoque(ovejaPos->getPosX(), ovejaPos->getPosY(), plagaPos->getPosX(), plagaPos->getPosY()))) {
							int movimiento = 1;
							if (ovejaPos->getPosX() == maxMapa) {
								movimiento = -1;
							}
							ovejaPos->setPosX(ovejaPos->getPosX()+movimiento);
							cout << "Oveja desplazada: (" << ovejaPos->getPosX() << ", " << ovejaPos->getPosY() << ")" << endl;
						}
					}
				}
				if (!cuervos->empty()) {
					for (int cant = 0; cant < cuervos->size(); cant++) {
						Cuervo* cuervoPos = &(*cuervos)[cant];
						if ((compruebaChoque(ovejaPos->getPosX(), ovejaPos->getPosY(), cuervoPos->getPosX(), cuervoPos->getPosY()))) {
							int movimiento = 1;
							if (ovejaPos->getPosX() == maxMapa) {
								movimiento = -1;
							}
							ovejaPos->setPosX(ovejaPos->getPosX() + movimiento);
							cout << "Oveja desplazada: (" << ovejaPos->getPosX() << ", " << ovejaPos->getPosY() << ")" << endl;
						}
					}
				}
			}
		}
	}

	// Ataque de las plagas
	int atacanPlagas(int arbolPosX, int arbolPosY){
		/* Return (que lo ataca con cada entero):
		* 0: nada
		* 1: plaga
		* 2: cuervo
		* 3: oveja
		*/
		if (!plagas->empty()) {
			for (int cant = 0; cant < plagas->size(); cant++) {
				Plaga* plagaPos = &(*plagas)[cant];
				if (!plagaPos->getAtacando() && (rangoPlagaAtacar(plagaPos->getPosX(), arbolPosX) && rangoPlagaAtacar(plagaPos->getPosY(), arbolPosY))) {
					plagaPos->setPosX(arbolPosX);
					plagaPos->setPosY(arbolPosY);
					plagaPos->estaAtacando();
					cout << "Plaga atacando: (" << plagaPos->getPosX() << ", " << plagaPos->getPosY() << ")" << endl;
					return 1;
				}
			}
		}
		if (!cuervos->empty()) {
			for (int cant = 0; cant < cuervos->size(); cant++) {
				Cuervo * cuervoPos = &(*cuervos)[cant];
				if (!cuervoPos->getAtacando() && (rangoPlagaAtacar(cuervoPos->getPosX(), arbolPosX) && rangoPlagaAtacar(cuervoPos->getPosY(), arbolPosY))){
					cuervoPos->setPosX(arbolPosX);
					cuervoPos->setPosY(arbolPosY);
					cuervoPos->estaAtacando();
					cout << "Cuervo atacando: (" << cuervoPos->getPosX() << ", " << cuervoPos->getPosY() << ")" << endl;
					return 2;
				}
			}
		}
		if (!ovejas->empty()) {
			for (int cant = 0; cant < ovejas->size(); cant++) {
				Oveja* ovejaPos = &(*ovejas)[cant];
				if (!ovejaPos->getAtacando() && (rangoPlagaAtacar(ovejaPos->getPosX(), arbolPosX) && rangoPlagaAtacar(ovejaPos->getPosY(), arbolPosY))) {
					ovejaPos->setPosX(arbolPosX);
					ovejaPos->setPosY(arbolPosY);
					ovejaPos->estaAtacando();
					cout << "Oveja atacando: (" << ovejaPos->getPosX() << ", " << ovejaPos->getPosY() << ")" << endl;
					return 3;
				}
			}
		}
		return 0;
	}

	void comprobarBinariosAtacados() {
		if (!binarios->empty()) {
			for (int cant = 0; cant < binarios->size(); cant++) {
				ArbolBinarioOrdenado* binario = &(*binarios)[cant];
				if (binario->getVivo() && !binario->enPeligro()) {
					int indiceAtacado = atacanPlagas(binario->getPosX(), binario->getPosY());
					switch (indiceAtacado)
					{
					case 0:
						break;
					case 1:
						binario->siendoAtacadoArbol();
						cout << "Binario Atacado por plaga: (" << binario->getPosX() << ", " << binario->getPosY() << ")" << endl;
						break;
					case 2:
						binario->siendoAtacadoFrutoCuervo();
						cout << "Binario Atacado por cuervo: (" << binario->getPosX() << ", " << binario->getPosY() << ")" << endl;
						break;
					case 3:
						binario->siendoAtacadoFrutoOveja();
						cout << "Binario Atacado por oveja: (" << binario->getPosX() << ", " << binario->getPosY() << ")" << endl;
						break;
					default:
						break;
					}
				}
			}
		}
	}

	void comprobarAvlsAtacados() {
		if (!avls->empty()) {
			for (int cant = 0; cant < avls->size(); cant++) {
				avl_tree * avl = &(*avls)[cant];
				if (avl->getVivo() && !avl->enPeligro()) {
					int indiceAtacado = atacanPlagas(avl->getPosX(), avl->getPosY());
					switch (indiceAtacado)
					{
					case 0:
						break;
					case 1:
						avl->siendoAtacadoArbol();
						cout << "Avl Atacado por plaga: (" << avl->getPosX() << ", " << avl->getPosY() << ")" << endl;
						break;
					case 2:
						avl->siendoAtacadoFrutoCuervo();
						cout << "Avl Atacado por cuervo: (" << avl->getPosX() << ", " << avl->getPosY() << ")" << endl;
						break;
					case 3:
						avl->siendoAtacadoFrutoOveja();
						cout << "Avl Atacado por oveja: (" << avl->getPosX() << ", " << avl->getPosY() << ")" << endl;
						break;
					default:
						break;
					}
				}
			}
		}
	}

	void comprobarHeapsAtacados() {
		if (!heaps->empty()) {
			for (int cant = 0; cant < heaps->size(); cant++) {
				Heap * heap = &(*heaps)[cant];
				if (heap->getVivo() && !heap->enPeligro()) {
					int indiceAtacado = atacanPlagas(heap->getPosX(), heap->getPosY());
					switch (indiceAtacado)
					{
					case 0:
						break;
					case 1:
						heap->siendoAtacadoArbol();
						cout << "heap Atacado por plaga (" << heap->getPosX() << ", " << heap->getPosY() << ")" << endl;
						break;
					case 2:
						heap->siendoAtacadoFrutoCuervo();
						cout << "heap Atacado por cuervo (" << heap->getPosX() << ", " << heap->getPosY() << ")" << endl;
						break;
					case 3:
						heap->siendoAtacadoFrutoOveja();
						cout << "heap Atacado por oveja (" << heap->getPosX() << ", " << heap->getPosY() << ")" << endl;
						break;
					default:
						break;
					}
				}
			}
		}
	}

	void comprobarSplaysAtacados() {
		if (!splays->empty()) {
			for (int cant = 0; cant < splays->size(); cant++) {
				SplayTree* splay = &(*splays)[cant];
				if (splay->getVivo() && !splay->enPeligro()) {
					int indiceAtacado = atacanPlagas(splay->getPosX(), splay->getPosY());
					switch (indiceAtacado)
					{
					case 0:
						break;
					case 1:
						splay->siendoAtacadoArbol();
						cout << "Splay Atacado por plaga (" << splay->getPosX() << ", " << splay->getPosY() << ")" << endl;
						break;
					case 2:
						splay->siendoAtacadoFrutoCuervo();
						cout << "Splay Atacado por cuervo (" << splay->getPosX() << ", " << splay->getPosY() << ")" << endl;
						break;
					case 3:
						splay->siendoAtacadoFrutoOveja();
						cout << "Splay Atacado por oveja (" << splay->getPosX() << ", " << splay->getPosY() << ")" << endl;
						break;
					default:
						break;
					}
				}
			}
		}
	}

	void comprobarArbolesAtacados() {
		comprobarBinariosAtacados();
		comprobarAvlsAtacados();
		comprobarHeapsAtacados();
		comprobarSplaysAtacados();
	}

	// Dejar de atacar arbol (cuando muere la plaga)
	void dejarBinariosAtacados(int plagaX, int plagaY) {
		if (!binarios->empty()) {
			for (int cant = 0; cant < binarios->size(); cant++) {
				ArbolBinarioOrdenado* binario = &(*binarios)[cant];
				if (binario->getVivo() && binario->enPeligro()) {
					if (compruebaChoque(binario->getPosX(), binario->getPosY(), plagaX, plagaY)) {
						if (binario->getAtacadoArbol()) {
							int vida = binario->getVida();
							int frutosPerdidos = 10 - (vida / 10);
							for (int cant = 0; cant < frutosPerdidos; cant++) {
								binario->perderFruto();
							}
						}
						binario->dejarAtacadoArbol();
						binario->dejarAtacadoFrutoCuervo();
						binario->dejarAtacadoFrutoOveja();
					}
				}
			}
		}
	}

	void dejarAvlsAtacados(int plagaX, int plagaY) {
		if (!avls->empty()) {
			for (int cant = 0; cant < avls->size(); cant++) {
				avl_tree* avl = &(*avls)[cant];
				if (avl->getVivo() && avl->enPeligro()) {
					if (compruebaChoque(avl->getPosX(), avl->getPosY(), plagaX, plagaY)) {
						if (avl->getAtacadoArbol()) {
							int vida = avl->getVida();
							int frutosPerdidos = 10 - (vida / 10);
							for (int cant = 0; cant < frutosPerdidos; cant++) {
								avl->perderFruto();
							}
						}
						avl->dejarAtacadoArbol();
						avl->dejarAtacadoFrutoCuervo();
						avl->dejarAtacadoFrutoOveja();
					}
				}
			}
		}
	}

	void dejarHeapsAtacados(int plagaX, int plagaY) {
		if (!heaps->empty()) {
			for (int cant = 0; cant < heaps->size(); cant++) {
				Heap* heap = &(*heaps)[cant];
				if (heap->getVivo() && heap->enPeligro()) {
					if (compruebaChoque(heap->getPosX(), heap->getPosY(), plagaX, plagaY)) {
						if (heap->getAtacadoArbol()) {
							int vida = heap->getVida();
							int frutosPerdidos = 10 - (vida / 10);
							for (int cant = 0; cant < frutosPerdidos; cant++) {
								heap->perderFruto();
							}
						}
						heap->dejarAtacadoArbol();
						heap->dejarAtacadoFrutoCuervo();
						heap->dejarAtacadoFrutoOveja();
					}
				}
			}
		}
	}

	void dejarSplaysAtacados(int plagaX, int plagaY) {
		if (!splays->empty()) {
			for (int cant = 0; cant < splays->size(); cant++) {
				SplayTree* splay = &(*splays)[cant];
				if (splay->getVivo() && !splay->enPeligro()) {
					if (compruebaChoque(splay->getPosX(), splay->getPosY(), plagaX, plagaY)) {
						if (splay->getAtacadoArbol()) {
							int vida = splay->getVida();
							int frutosPerdidos = 10 - (vida / 10);
							for (int cant = 0; cant < frutosPerdidos; cant++) {
								splay->perderFruto();
							}
						}
						splay->dejarAtacadoArbol();
						splay->dejarAtacadoFrutoCuervo();
						splay->dejarAtacadoFrutoOveja();
					}
				}
			}
		}
	}

	void dejarAtacarTodos(int plagaX, int plagaY) {
		dejarBinariosAtacados(plagaX, plagaY);
		dejarAvlsAtacados(plagaX, plagaY);
		dejarHeapsAtacados(plagaX, plagaY);
		dejarSplaysAtacados(plagaX, plagaY);
	}

	// Eliminar plagas (con granjero)
	void eliminarPlagasGranjero() {
		if (!plagas->empty()) {
			for (int cant = 0; cant < plagas->size(); cant++) {
				Plaga* plagaPos = &(*plagas)[cant];
				if (plagaPos->getVivo()) {
					if (compruebaChoqueGranjero(plagaPos->getPosX(), plagaPos->getPosY())) {
						plagaPos->haMuerto();
						dejarAtacarTodos(plagaPos->getPosX(), plagaPos->getPosY());
						cout << "Plaga ha muerto Granjero (" << plagaPos->getPosX() << ", " << plagaPos->getPosY() << ")" << endl;
					}
				}
			}
		}
	}

	void eliminarCuervosGranjero() {
		if (!cuervos->empty()) {
			for (int cant = 0; cant < cuervos->size(); cant++) {
				Cuervo* cuervoPos = &(*cuervos)[cant];
				if (cuervoPos->getVivo()) {
					if (compruebaChoqueGranjero(cuervoPos->getPosX(), cuervoPos->getPosY())) {
						cuervoPos->haMuerto();
						dejarAtacarTodos(cuervoPos->getPosX(), cuervoPos->getPosY());
						cout << "Cuervo ha muerto Granjero (" << cuervoPos->getPosX() << ", " << cuervoPos->getPosY() << ")" << endl;
					}
				}
			}
		}
	}

	void eliminarOvejasGranjero() {
		if (!ovejas->empty()) {
			for (int cant = 0; cant < ovejas->size(); cant++) {
				Oveja* ovejaPos = &(*ovejas)[cant];
				if (ovejaPos->getVivo()) {
					if (compruebaChoqueGranjero(ovejaPos->getPosX(), ovejaPos->getPosY())) {
						ovejaPos->haMuerto();
						dejarAtacarTodos(ovejaPos->getPosX(), ovejaPos->getPosY());
						cout << "Oveja ha muerto Granjero (" << ovejaPos->getPosX() << ", " << ovejaPos->getPosY() << ")" << endl;
					}
				}
			}
		}
	}

	void eliminarTodasPlagasGranjero() {
		eliminarPlagasGranjero();
		eliminarCuervosGranjero();
		eliminarOvejasGranjero();
	}

	// Eliminar plagas (con espantapajaros)
	void eliminarPlagasEspantapajaros() {
		if (!plagas->empty()) {
			for (int cant = 0; cant < plagas->size(); cant++) {
				Plaga* plagaPos = &(*plagas)[cant];
				if (plagaPos->getVivo()) {
					if (rangoEspantapajarosProteger(plagaPos->getPosX(), plagaPos->getPosY())) {
						plagaPos->haMuerto();
						dejarAtacarTodos(plagaPos->getPosX(), plagaPos->getPosY());
						cout << "Plaga ha muerto Espantapajaros (" << plagaPos->getPosX() << ", " << plagaPos->getPosY() << ")" << endl;
					}
				}
			}
		}
	}

	void eliminarCuervosEspantapajaros() {
		if (!cuervos->empty()) {
			for (int cant = 0; cant < cuervos->size(); cant++) {
				Cuervo* cuervoPos = &(*cuervos)[cant];
				if (cuervoPos->getVivo()) {
					if (rangoEspantapajarosProteger(cuervoPos->getPosX(), cuervoPos->getPosY())) {
						cuervoPos->haMuerto();
						dejarAtacarTodos(cuervoPos->getPosX(), cuervoPos->getPosY());
						cout << "Cuervo ha muerto Espantapajaros (" << cuervoPos->getPosX() << ", " << cuervoPos->getPosY() << ")" << endl;
					}
				}
			}
		}
	}

	void eliminarOvejasEspantapajaros() {
		if (!ovejas->empty()) {
			for (int cant = 0; cant < ovejas->size(); cant++) {
				Oveja* ovejaPos = &(*ovejas)[cant];
				if (ovejaPos->getVivo()) {
					if (rangoEspantapajarosProteger(ovejaPos->getPosX(), ovejaPos->getPosY())) {
						ovejaPos->haMuerto();
						dejarAtacarTodos(ovejaPos->getPosX(), ovejaPos->getPosY());
						cout << "Oveja ha muerto Espantapajaros (" << ovejaPos->getPosX() << ", " << ovejaPos->getPosY() << ")" << endl;
					}
				}
			}
		}
	}

	void eliminarTodasPlagasEspantapajaros() {
		eliminarPlagasEspantapajaros();
		eliminarCuervosEspantapajaros();
		eliminarOvejasEspantapajaros();
	}

	// Las siguientes es posible que vayan en otro lugar
	// Comprar objetos
	void compraBinario() {
		if (granjero->getDinerio() >= (*precios)[0]) {
			binarios->push_back(ArbolBinarioOrdenado(granjero->getX(), granjero->getY()));
			granjero->pierdeDinero((*precios)[0]);
		}
	}

	void compraAVL() {
		if (granjero->getDinerio() >= (*precios)[1]) {
			avls->push_back(avl_tree(granjero->getX(), granjero->getY()));
			granjero->pierdeDinero((*precios)[1]);
		}
	}

	void compraHeap(){
		if (granjero->getDinerio() >= (*precios)[2]) {
			heaps->push_back(Heap(tamannoHeap, granjero->getX(), granjero->getY()));
			granjero->pierdeDinero((*precios)[2]);
		}
	}

	void compraSplay() {
		if (granjero->getDinerio() >= (*precios)[3]) {
			splays->push_back(SplayTree(granjero->getX(), granjero->getY()));
			granjero->pierdeDinero((*precios)[3]);
		}
	}

	void comprarEspantapájaros() {
		if (espantapajaros->size() < 2) {
			if (granjero->getDinerio() >= (*precios)[4]) {
				splays->push_back(SplayTree(granjero->getX(), granjero->getY()));
				granjero->pierdeDinero((*precios)[4]);
			}
		}
	}

	// Vender frutos
	void venderFrutoBinario() {
		for (int i = 0; i < binarios->size(); i++) {
			if ((*binarios)[i].cantidadNodos((*binarios)[i].raiz) > 0) {
				granjero->ganaDinero((*binarios)[i].frutoVender());
				break;
			}
		}
	}

	void venderFrutoAVL() {
		for (int i = 0; i < avls->size(); i++) {
			if ((*avls)[i].countNodes((*avls)[i].r) > 0) {
				granjero->ganaDinero((*avls)[i].frutoVender());
				break;
			}
		}
	}

	void venderFrutoHeap() {
		for (int i = 0; i < heaps->size(); i++) {
			if ((*heaps)[i].cantidad > 0) {
				granjero->ganaDinero((*heaps)[i].frutoVender());
				break;
			}
		}
	}

	void venderFrutoSplay() {
		for (int i = 0; i < splays->size(); i++) {
			if ((*splays)[i].CountNodes((*splays)[i].raiz) > 0) {
				granjero->ganaDinero((*splays)[i].frutoVender());
				break;
			}
		}
	}

	void venderTodoBinario() {
		for (int i = 0; i < binarios->size(); i++) {
			granjero->ganaDinero((*binarios)[i].frutosVender());
		}
	}

	void venderTodoAVL() {
		for (int i = 0; i < avls->size(); i++) {
			granjero->ganaDinero((*avls)[i].frutosVender());
		}
	}

	void venderTodoHeap() {
		for (int i = 0; i < heaps->size(); i++) {
			granjero->ganaDinero((*heaps)[i].frutosVender());
		}
	}

	void venderTodoSplay() {
		for (int i = 0; i < splays->size(); i++) {
			granjero->ganaDinero((*splays)[i].frutosVender());
		}
	}

	// Hilo
	void reanudarHilo() { running = true; }
	void pausarHilo() { running = false; }

	void run() {
		while (true) {
			this_thread::sleep_for(chrono::milliseconds(1));
			while (running) {
				this_thread::sleep_for(chrono::milliseconds(1));
				comprobarArbolesAtacados();
				this_thread::sleep_for(chrono::milliseconds(1));
				eliminarTodasPlagasGranjero();
				this_thread::sleep_for(chrono::milliseconds(1));
				eliminarTodasPlagasEspantapajaros();
			}
		}
	}

private:

	// Jugador
	Granjero* granjero;

	// Arboles
	vector<ArbolBinarioOrdenado>* binarios;
	vector<avl_tree>* avls;
	vector<Heap>* heaps; 
	vector<SplayTree>* splays;

	// Plagas
	vector<Cuervo>* cuervos; 
	vector<Plaga>* plagas;
	vector<Oveja>* ovejas;

	// Espantapajaro
	vector<Espantapajaros>* espantapajaros;

	// Hilos
	bool running;

	// Precios
	vector<double>* precios; // Binarios, avl, heap, splay, espantapajaros (size() = 5)

	int rangoAtaquePlagas = 1;
	int rangoCoberturaEspantapajaros = 1;
	int tamannoHeap = 100;
	int maxMapa = 7; // NO se cambia



};

#endif