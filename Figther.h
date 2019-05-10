//
// Created by Angel Motta on 2019-05-10.
//

#ifndef PC2_FIGTHER_H
#define PC2_FIGTHER_H

#include "Defense.h"
class Figther {
    int ataque;
    int defensa;
public:
    Figther(char el,char sh, char ar, char pu, char sa, char fi);
    int attack();
    int defense();
};


#endif //PC2_FIGTHER_H
