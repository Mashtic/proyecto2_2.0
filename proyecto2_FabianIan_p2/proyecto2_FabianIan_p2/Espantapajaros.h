#ifndef ESPANTAPAJAROS_H
#define ESPANTAPAJAROS_H

#include <iostream>

using namespace std;

class Espantapajaros {

public:

	Espantapajaros(int pPosX, int pPosY) {
		pos[0] = pPosX;
		pos[1] = pPosY;
		activo = true;
	}

	// Gets atributos
	int getPosX() {
		return pos[0];
	}

	int getPosY() {
		return pos[1];
	}

	bool getActivo() {
		return activo;
	}

private:
	int pos[2];
	bool activo;
};

#endif