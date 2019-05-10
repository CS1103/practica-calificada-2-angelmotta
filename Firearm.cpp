#include "Firearm.h"
#include <iostream>
Firearm::Firearm() {
    //Defense{1};         // invocando al constructor del padre
    power = 10;
    identificador = 'F';
}

int Firearm::attack() {
    std::cout << "Clase Hija" << std::endl;
    return power;
}