#ifndef GENERAPLAGA_H
#define GENERAPLAGA_H

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

#include "Plaga.h"
#include "Aleatorios.h"

using namespace std;

class GeneraPlaga {

public:

	GeneraPlaga(double probaAparicion, int minAparicionTiempo, int maxAparicionTiempo,
		int pMaxMapa, vector<Plaga>* pPlagas) {
		probabilidadAparicion = probaAparicion;
		tiempoMinAparicionMinutos = minAparicionTiempo;
		tiempoMaxAparicionMinutos = maxAparicionTiempo;
		running = true;
		plagas = pPlagas;
		maxMapa = pMaxMapa;
	}

	// Métodos
	// Gets
	string getInfoString() {
		string info = to_string(probabilidadAparicion) + "\t";
		info += to_string(tiempoMinAparicionMinutos) + "\t";
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

	Plaga * factoryPlaga() {
		int posX = Aleatorios::generaPosMapa();
		int posY = Aleatorios::generaPosMapa();
		return new Plaga(posX, posY);
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
			while (running) {
				int tiempoEspera = generaTiempoEspera();
				cout << "Plaga: " << tiempoEspera << endl;
				this_thread::sleep_for(chrono::seconds(tiempoEspera));
				double probabilidadNueva = generaProbabilidad();
				if (probabilidadNueva >= probabilidadAparicion) {
					Plaga * newPlaga = factoryPlaga();
					plagas->push_back(*newPlaga);
					cout << "Nuevo Plaga generado: (" << newPlaga->getPosX() << ", " << newPlaga->getPosY() << ")" << endl;
				}
			}
		}
	}

private:

	// Vector
	vector<Plaga>* plagas;

	// Generales
	double probabilidadAparicion; // 0 < x < 1
	int maxMapa;

	// Tiempos
	int tiempoMinAparicionMinutos;
	int tiempoMaxAparicionMinutos;

	// Hilos
	bool running;
};

#endif