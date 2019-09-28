#ifndef ANT_H_INCLUDED
#define ANT_H_INCLUDED

#include "Stick.h"

class Ant{
private:
    bool direction;
    int location;
    int velocity;
    int incTime;

public:
    Ant();
    Ant(int location, bool direction);
    Ant(int location);
    bool isCollision(Ant other, Stick myStick);
    int turnAround();
    int getLocation();
    bool getDirection();
    void setDirection(bool direction);
    int getVelocity();
    bool isOnStick(Stick myStick);
    void step();
};

#endif // ANT_H_INCLUDED
