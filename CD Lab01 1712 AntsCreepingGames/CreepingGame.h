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
    void setDirection(vector<bool> dir);
    int drivingGame();
    void playGame();
    bool isOver();
    int maxTime();
    int minTime();
};

#endif // CREEPINGGAME_H_INCLUDED
