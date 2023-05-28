#ifndef CUERVO_H
#define CUERVO_H

#include <iostream>
#include <string>

using namespace std;

class Cuervo {

public:

	Cuervo(int posX, int posY) {
		pos[0] = posX;
		pos[1] = posY;
		vivo = true;
		atacando = false;
	}

	// Gets y set atributos
	void setPosX(int posX) {
		pos[0] = posX;
	}
	void setPosY(int posY) {
		pos[1] = posY;
	}

	int getPosX() {
		return pos[0];
	}

	int getPosY() {
		return pos[1];
	}

	void haMuerto() {
		vivo = false;
	}

	bool getVivo() {
		return vivo;
	}

	bool getAtacando() {
		return atacando;
	}

	void estaAtacando() {
		atacando = true;
	}

	void dejarAtacando() {
		atacando = false;
	}

	string getInfoString() {
		string info = to_string(pos[0]) + "\t";
		info += to_string(pos[1]) + "\n";
		return info;
	}

private:
	int pos[2];
	bool vivo;
	bool atacando;
};

#endif