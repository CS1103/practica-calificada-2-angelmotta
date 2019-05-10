#include "Defense.h"
#include <iostream>

Defense::Defense(int _level) {
    level = _level;
}

int Defense::defense() {
    std::cout << "Clase padre" << std::endl;
    return level;
}