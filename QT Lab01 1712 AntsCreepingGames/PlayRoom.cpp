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

void PlayRoom::createGame(vector<int> pos/*in*/,int lengthOfStick/*in*/,int &MaxTime/*out*/,int &MinTime/*out*/){
    vector<bool> dir;

    CreepingGame Game1;
    Games.push_back(Game1);
    Game1.initGame(pos,lengthOfStick);
    Game1.setDirection(Game1.maxCondition());
    cout << "The max time condition: " << endl;;
    MaxTime=Game1.playGame();

    CreepingGame Game2;
    Games.push_back(Game2);
    Game2.initGame(pos,lengthOfStick);
    Game2.setDirection(Game2.minCondition());
    cout << "The min time condition: " << endl;
    MinTime=Game2.playGame();
}

void PlayRoom::createGame(){
    vector<int> pos;
    vector<bool> dir;
    for(int i = 0; i < 5; i++){
        int p;
        cout << "Enter Ant " << i + 1 <<" 's position: ";
        cin >> p;
        pos.push_back(p);
    }
    cout << endl;

    CreepingGame Game1;
    Games.push_back(Game1);
    Game1.initGame(pos);
    Game1.setDirection(Game1.maxCondition());
    cout << "The max time condition: " << endl;;
    Game1.playGame();

    CreepingGame Game2;
    Games.push_back(Game2);
    Game2.initGame(pos);
    Game2.setDirection(Game2.minCondition());
    cout << "The min time condition: " << endl;
    Game2.playGame();
}
