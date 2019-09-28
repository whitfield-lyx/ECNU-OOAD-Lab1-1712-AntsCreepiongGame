#ifndef ANTSCREEPINGGAME_H
#define ANTSCREEPINGGAME_H

#include <QWidget>

namespace Ui {
class AntsCreepingGame;
}

class AntsCreepingGame : public QWidget
{
    Q_OBJECT

public:
    explicit AntsCreepingGame(QWidget *parent = nullptr);
    ~AntsCreepingGame();

private:
    Ui::AntsCreepingGame *ui;
};

#endif // ANTSCREEPINGGAME_H
