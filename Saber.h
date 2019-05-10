//
// Created by Angel Motta on 2019-05-10.
//

#ifndef PC2_SABER_H
#define PC2_SABER_H


#include "Attack.h"

class Saber : public Attack {
    char identificador;
public:
    Saber();   // Definicion constructor por defecto
    Saber(int _power, char _identificador): Attack{_power}, identificador{_identificador} {}
    int attack();
};


#endif //PC2_SABER_H
