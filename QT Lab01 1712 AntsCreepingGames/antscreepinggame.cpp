#include "antscreepinggame.h"
#include "ui_antscreepinggame.h"

AntsCreepingGame::AntsCreepingGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AntsCreepingGame)
{
    ui->setupUi(this);
}

AntsCreepingGame::~AntsCreepingGame()
{
    delete ui;
}
