#include "Punch.h"

#include <iostream>
Punch::Punch() {
    //Defense{1};         // invocando al constructor del padre
    power = 1;
    identificador = 'P';
}

int Punch::attack() {
    //std::cout << "Clase Hija" << std::endl;
    return power;
}