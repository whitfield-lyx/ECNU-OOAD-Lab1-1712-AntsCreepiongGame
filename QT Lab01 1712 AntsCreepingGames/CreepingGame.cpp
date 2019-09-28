#include "CreepingGame.h"
#include "iostream"
#include <cmath>

using namespace std;

CreepingGame::CreepingGame(){
    time = 0;
    number = 5;
    incTime = 1;
}

int CreepingGame::drivingGame(){
    time += incTime;
    cout << "At second " << time << ":\t";
    for(int i = 0; i < 5; i++){
        Ants[i].step();
        if(Ants[i].getLocation() > stick.getLength()){
            cout << stick.getLength() << "\t";
        }
        else if(Ants[i].getLocation() < 0){
            cout << 0 << "\t";
        }else
            cout << Ants[i].getLocation() << "\t";
    }
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            Ants[i].isCollision(Ants[j], stick);
        }
    }
}
void CreepingGame::initGame(vector<int> pos){
    for(int i = 0; i < pos.size(); i++){
        Ant tmp(pos[i]);
        Ants.push_back(tmp);
    }
}
void CreepingGame::initGame(vector<int> pos,int length){
    for(int i = 0; i < pos.size(); i++){
        Ant tmp(pos[i]);
        Ants.push_back(tmp);
    }
    stick.setLength(length);
}

void CreepingGame::setDirection(vector<bool> dir){
    for(int i = 0; i < dir.size(); i++){
        Ants[i].setDirection(dir[i]);
    }
}

vector<bool> CreepingGame::maxCondition(){
    vector<bool> dir;
    for(int i = 0; i < 5; i++){
        if(Ants[i].getLocation() > stick.getLength() / 2){
            dir.push_back(false);
        }
        else
            dir.push_back(true);
    }
    return dir;
}

vector<bool> CreepingGame::minCondition(){
    vector<bool> dir;
    for(int i = 0; i < 5; i++){
        if(Ants[i].getLocation() <= stick.getLength() / 2){
            dir.push_back(false);
        }
        else
            dir.push_back(true);
    }
    return dir;
}

int CreepingGame::playGame(){
    while(1){
        drivingGame();
        cout << endl;
        if(isOver())
            break;
    }
    cout << "Total time is: " << time << endl;
    cout << endl;
    return  time;
}

bool CreepingGame::isOver(){
    bool re = true;
    for(int i = 0; i < 5; i++){
        if(Ants[i].isOnStick(stick))
            re = false;
    }
    return re;
}

int CreepingGame::maxTime(){
    int mid = stick.getLength() / 2;
    int m = abs(Ants[0].getLocation() - mid);
    for(int i = 1; i < 5; i++){
        int tmp = abs(Ants[i].getLocation() - mid);
        m = (m >= tmp)?m:tmp;
    }
    return (m + mid) / Ants[0].getVelocity() + 1;
}

int CreepingGame::minTime(){
    int mid = stick.getLength() / 2;
    int m = abs(Ants[0].getLocation() - mid);
    for(int i = 1; i < 5; i++){
        int tmp = abs(Ants[i].getLocation() - mid);
        m = (m <= tmp)?m:tmp;
    }
    return (m + mid) / Ants[0].getVelocity() + 1;
}
