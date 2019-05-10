#include "Shield.h"
#include <iostream>
Shield::Shield() {
    //Defense{4};         // invocando al constructor del padre
    level = 4;
    identificador = 'S';
}

int Shield::defense() {
    std::cout << "Clase Hija" << std::endl;
    return level;
}