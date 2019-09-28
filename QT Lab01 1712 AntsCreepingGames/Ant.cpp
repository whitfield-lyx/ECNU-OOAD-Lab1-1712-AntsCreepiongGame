#include "Ant.h"

Ant::Ant(){
    direction = false; // false means left
    location = 0;
    velocity = 5;
    incTime = 1;
}

Ant::Ant(int location, bool direction){
    this->direction = direction;
    this->location = location;
    velocity = 5;
    incTime = 1;
}

Ant::Ant(int location){
    direction = false;
    this->location = location;
    velocity = 5;
    incTime = 1;
}

bool Ant::isCollision(Ant other, Stick myStick){
    Ant left, right;
    if(this->getLocation() <= other.getLocation()){
        if(this->isOnStick(myStick) && other.isOnStick(myStick)
           && this->getDirection() && !other.getDirection()
           && this->getLocation() > other.getLocation()){
            this->turnAround();
            other.turnAround();
            return true;
        }
        else
            return false;
    }
    else{
        if(this->isOnStick(myStick) && other.isOnStick(myStick)
           && !this->getDirection() && other.getDirection()
           && this->getLocation() < other.getLocation()){
            this->turnAround();
            other.turnAround();
            return true;
        }
        else
            return false;
    }
}

int Ant::getLocation(){
    return location;
}

bool Ant::getDirection(){
    return direction;
}

void Ant::setDirection(bool direction){
    this->direction = direction;
}

int Ant::getVelocity(){
    return velocity;
}

void Ant::turnAround(){
    direction = !direction;
}

bool Ant::isOnStick(Stick myStick){
    return location < myStick.getLength() && location >= 0;
}

void Ant::step(){
    if(getDirection())
        location += velocity * incTime;
    else
        location -= velocity * incTime;
}
