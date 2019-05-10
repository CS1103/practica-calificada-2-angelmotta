#include <iostream>
#include "Elude.h"
#include "Defense.h"
#include "Attack.h"
#include "Punch.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Elude Elude1;
    Punch Punch1;
    std::cout << Elude1.defense() << std::endl;
    std::cout << Punch1.attack() << std::endl;

    assert(Elude1.defense() == 1);
    assert(Punch1.attack() == 1);
    std::cout << "Test Validacion de objetos: PASSED" << std::endl;
    return 0;
}