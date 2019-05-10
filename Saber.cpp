#include "Saber.h"
#include <iostream>
Saber::Saber() {
    //Defense{1};         // invocando al constructor del padre
    power = 5;
    identificador = 'S';
}

int Saber::attack() {
    std::cout << "Clase Hija" << std::endl;
    return power;
}