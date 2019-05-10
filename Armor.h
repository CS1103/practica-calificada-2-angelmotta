#ifndef PC2_ARMOR_H
#define PC2_ARMOR_H


#include "Defense.h"

class Armor: public Defense {
    char identificador;
public:
    Armor();   // definicion constructor por defecto
    Armor(int _level, char _identificador): Defense{_level}, identificador{_identificador} {}
    int defense();
};


#endif //PC2_ARMOR_H
