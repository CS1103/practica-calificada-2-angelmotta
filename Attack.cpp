#include "Attack.h"
#include <iostream>
Attack::Attack(int _power) {
    power = _power;
}

int Attack::attack() {
    std::cout << "Clase padre" << std::endl;
    return power;
}