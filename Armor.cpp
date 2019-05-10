#include "Armor.h"
#include <iostream>

Armor::Armor() {
    //Defense{8};         // invocando al constructor del padre
    level = 8;
    identificador = 'A';
}

int Armor::defense() {
    std::cout << "Clase Hija" << std::endl;
    return level;
}