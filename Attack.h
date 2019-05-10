#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H


class Attack {
protected:
    int power;
public:
    Attack(){};
    Attack(int _power);
    virtual int attack();
    void definirAtaque(char punch, char saber, char fire);
};


#endif //PC2_ATTACK_H
