//
// Created by Angel Motta on 2019-05-10.
//

#ifndef PC2_FIREARM_H
#define PC2_FIREARM_H


#include "Attack.h"

class Firearm : public Attack {
    char identificador;
public:
    Firearm();   // Definicion constructor por defecto
    Firearm(int _power, char _identificador): Attack{_power}, identificador{_identificador} {}
    int attack();
};


#endif //PC2_FIREARM_H
