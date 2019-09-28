#ifndef CREEPINGGAME_H_INCLUDED
#define CREEPINGGAME_H_INCLUDED
#include <vector>
#include "Ant.h"

using namespace std;

class CreepingGame{
private:
    int time;
    int number;
    int incTime;
    vector<Ant> Ants;
    Stick stick;

public:
    CreepingGame();
    vector<bool> maxCondition();
    vector<bool> minCondition();
    void initGame(vector<int> pos);
    void initGame(vector<int> pos,int length);
    void setDirection(vector<bool> dir);
    int drivingGame();
    int playGame(); //Change void to int to return the time (by lyx
    bool isOver();
    int maxTime();
    int minTime();
};

#endif // CREEPINGGAME_H_INCLUDED
