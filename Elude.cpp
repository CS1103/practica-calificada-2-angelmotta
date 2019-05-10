#include "Elude.h"
#include <iostream>
Elude::Elude() {
    //Defense{1};         // invocando al constructor del padre
    level = 1;
    identificador = 'E';
}

int Elude::defense() {
    //std::cout << "Clase Hija" << std::endl;
    return level;
}