#include "PlayRoom.h"
#include "CreepingGame.h"
#include <iostream>

using namespace std;

PlayRoom::PlayRoom(){

}

void PlayRoom::playGames(){
    while(1){
        createGame();
    }
}

void PlayRoom::createGame(){
    vector<int> pos;
    vector<bool> dir;
    for(int i = 0; i < 5; i++){
        int p;
        cin >> p;
        pos.push_back(p);
    }
    CreepingGame Game1;
    Games.push_back(Game1);
    Game1.initGame(pos);
    Game1.setDirection(Game1.maxCondition());
    Game1.playGame();

    CreepingGame Game2;
    Games.push_back(Game2);
    Game2.initGame(pos);
    Game2.setDirection(Game2.minCondition());
    Game2.playGame();
}

