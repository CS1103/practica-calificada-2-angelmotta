#ifndef PC2_SHIELD_H
#define PC2_SHIELD_H


#include "Defense.h"

class Shield: public Defense {
    char identificador;
public:
    Shield();   // definicion constructor por defecto
    Shield(int _level, char _identificador): Defense{_level}, identificador{_identificador} {}
    int defense();
};


#endif //PC2_SHIELD_H
