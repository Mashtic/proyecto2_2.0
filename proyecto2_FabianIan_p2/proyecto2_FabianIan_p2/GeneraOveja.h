#ifndef GENERAOVEJA_H
#define GENERAOVEJA_H

#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <vector>

#include "Oveja.h"
#include "Aleatorios.h"

using namespace std;

class GeneraOveja {

public:

	GeneraOveja(double probaAparicion, int minAparicionTiempo, int maxAparicionTiempo,
		int pMaxMapa, vector<Oveja>* pPlagas) {
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

	// Plagas
	int generaTiempoEspera() {
		return Aleatorios::generaEnRangoTiempoSegundos(tiempoMinAparicionMinutos, tiempoMaxAparicionMinutos);
	}

	double generaProbabilidad() {
		return Aleatorios::generaEnRangoProbabilidad(0, 1);
	}

	Oveja * factoryOveja() {
		int posX = Aleatorios::generaPosMapa();
		int posY = Aleatorios::generaPosMapa();
		return new Oveja(posX, posY);
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
				cout << "Oveja: " << tiempoEspera << endl;
				this_thread::sleep_for(chrono::seconds(tiempoEspera));
				double probabilidadNueva = generaProbabilidad();
				if (probabilidadNueva >= probabilidadAparicion) { // Si se supera la probabilidad, se genera
					Oveja * newPlaga = factoryOveja();
					plagas->push_back(*newPlaga);
					cout << "Nuevo Oveja generado: (" << newPlaga->getPosX() << ", " << newPlaga->getPosY() << ")" << endl;
				}
			}
		}
	}

private:
	// Vector
	vector<Oveja>* plagas;

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