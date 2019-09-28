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
    void createGame();
    //int getIncTime();
};

#endif // PLAYROOM_H_INCLUDED
