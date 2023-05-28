#ifndef CONVERSIONPOSICION_H
#define CONVERSIONPOSICION_H

#include <iostream>

class Conversion {

public:

	static int cambioNumero(int posX, int posY) {
		return (posX * 10 + posY);
	}

};

#endif