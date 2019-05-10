#ifndef PC2_PUNCH_H
#define PC2_PUNCH_H

#include "Attack.h"

class Punch : public Attack{
    char identificador;
public:
    Punch();   // Definicion constructor por defecto
    Punch(int _power, char _identificador): Attack{_power}, identificador{_identificador} {}
    int attack();
};


#endif //PC2_PUNCH_H
