#ifndef WINDOW_H
#define WINDOW_H

#include "ui_window.h"
#include <QDialog>
#include <bits/stdc++.h>
#include "PlayRoom.h"
#include "CreepingGame.h"
#include "Ant.h"
#include "Stick.h"

namespace Ui {
class window;
}

class window : public QDialog
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = nullptr);
    ~window();
    int location[5]={0};
    int length=300;

private slots:
   void on_Location1_valueChanged();
   void on_Location2_valueChanged();
   void on_Location3_valueChanged();
   void on_Location4_valueChanged();
   void on_Location5_valueChanged();
   void on_Length_valueChanged();

   void on_StartButtom_clicked();
   void on_ExitButtom_clicked();

private:
    Ui::window *ui;
};

#endif // WINDOW_H
