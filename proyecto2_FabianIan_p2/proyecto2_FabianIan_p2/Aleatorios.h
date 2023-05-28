#ifndef ALEATORIOS_H
#define ALEATORIOS_H

#include <iostream>
#include <random>

using namespace std;

class Aleatorios {

public:
   
    static double generaEnRangoValor(double min, double max) {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(min, max);

        return dist(gen);
    }

    static double generaEnRangoProbabilidad(double min, double max) {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(min, max);

        return dist(gen);
    }

    static int generaEnRangoTiempoSegundos(int min, int max) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(min * 60, max * 60);

        return dist(gen);
    }

    static int generaPosMapa() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(1, 7);

        return dist(gen);
    }

};

#endif