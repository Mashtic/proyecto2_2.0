#ifndef GENERACUERVO_H
#define GENERACUERVO_H

#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <vector>

#include "Cuervo.h"
#include "Aleatorios.h"

using namespace std;

class GeneraCuervo {

public:

	GeneraCuervo(double probaAparicion, int minAparicionTiempo, int maxAparicionTiempo, 
		int pMaxMapa, vector<Cuervo>* pPlagas) {
		probabilidadAparicion = probaAparicion;
		tiempoMinAparicionMinutos = minAparicionTiempo;
		tiempoMaxAparicionMinutos = maxAparicionTiempo;
		running = true;
		plagas = pPlagas;
		maxMapa1 = pMaxMapa;
	}

	// Métodos
	// Gets
	string getInfoString() {
		string info = to_string(probabilidadAparicion) + "\n";
		info += to_string(tiempoMinAparicionMinutos) + "\n";
		info += to_string(tiempoMaxAparicionMinutos) + "\n";
		for (int i = 0; i < plagas->size(); i++) {
			if ((*plagas)[i].getVivo()) {
				info += (*plagas)[i].getInfoString();
			}
		}
		return info;
	}

	// Procesos
	int generaTiempoEspera() {
		return Aleatorios::generaEnRangoTiempoSegundos(tiempoMinAparicionMinutos, tiempoMaxAparicionMinutos);
	}

	double generaProbabilidad() {
		return Aleatorios::generaEnRangoProbabilidad(0, 1);
	}

	Cuervo * factoryCuervo() {
		int posX = Aleatorios::generaPosMapa();
		int posY = Aleatorios::generaPosMapa();
		return new Cuervo(posX, posY);
	}


	// Hilo
	void pausar() {
		running = false;
	}

	void reanudar() {
		running = true;
	}

	void run() {
		while (true) {
			while (running){
				int tiempoEspera = generaTiempoEspera();
				cout << "Cuervo: " << tiempoEspera << endl;
				this_thread::sleep_for(chrono::seconds(tiempoEspera));
				double probabilidadNueva = generaProbabilidad();
				if (probabilidadNueva >= probabilidadAparicion) {
					Cuervo * newCuervo = factoryCuervo();
					plagas->push_back(*newCuervo);
					cout << "Nuevo cuervo generado: (" << newCuervo->getPosX() << ", " << newCuervo->getPosY() << ")" << endl;
				}
			}
		}
	}

private:
	// Vector
	vector<Cuervo>* plagas;

	// Generales
	double probabilidadAparicion; // 0 < x < 1
	int maxMapa1;
	
	// Tiempos
	int tiempoMinAparicionMinutos;
	int tiempoMaxAparicionMinutos;

	// Hilos
	bool running;
};

#endif