#ifndef PC2_ELUDE_H
#define PC2_ELUDE_H


#include "Defense.h"

class Elude: public Defense {
    char identificador;
public:
    Elude();   // Definicion constructor por defecto
    Elude(int _level, char _identificador): Defense{_level}, identificador{_identificador} {}
    int defense();
};


#endif //PC2_ELUDE_H
