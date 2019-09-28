#ifndef PLAYROOM_H_INCLUDED
#define PLAYROOM_H_INCLUDED

#include "CreepingGame.h"

class PlayRoom{
private:
    vector<CreepingGame> Games;

public:
    PlayRoom();
    //int buildDirections();
    void playGames();
    void createGame(vector<int> pos/*in*/,int lengthOfStick/*in*/,int &MaxTime/*out*/,int &MinTime/*out*/); //add ref to return max and min time
    void createGame();
    //int getIncTime();
};

#endif // PLAYROOM_H_INCLUDED
