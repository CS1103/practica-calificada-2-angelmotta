#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H


class Defense {
protected:
    int level;
public:
    Defense(){};
    Defense(int _level);
    virtual int defense();
};


#endif //PC2_DEFENSE_H
