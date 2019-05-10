#include "Attack.h"
#include <iostream>
#include "Punch.h"
#include "Saber.h"
#include "Firearm.h"
Attack::Attack(int _power) {
    power = _power;
}

int Attack::attack() {
    std::cout << "Clase padre" << std::endl;
    return power;
}

void Attack::definirAtaque(char punch, char saber, char fire) {
    Punch punch_peleador;
    Saber saber_peleador;
    Firearm fire_peleador;
    if (punch == 'P') {
        power = power + punch_peleador.attack();
    }
    if (saber == 'S') {
        power = power + saber_peleador.attack();
    }
    if (fire == 'F') {
        power = power + fire_peleador.attack();
    }
}
