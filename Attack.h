#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H


class Attack {
protected:
    int power;
public:
    Attack(){};
    Attack(int _power);
    virtual int attack();
};


#endif //PC2_ATTACK_H
