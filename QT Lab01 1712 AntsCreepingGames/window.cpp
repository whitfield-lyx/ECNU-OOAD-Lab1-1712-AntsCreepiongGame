#include "window.h"
#include "ui_window.h"
#include <iostream>
using namespace std;

window::window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("anticon.ico"));
}

window::~window()
{
    delete ui;
}

void window::on_Location1_valueChanged()
{
    location[0]=ui->Location1->text().toInt();

}
void window::on_Location2_valueChanged()
{
    location[1]=ui->Location2->text().toInt();

}
void window::on_Location3_valueChanged()
{
    location[2]= ui->Location3->text().toInt();

}
void window::on_Location4_valueChanged()
{
    location[3]= ui->Location4->text().toInt();

}
void window::on_Location5_valueChanged()
{
    location[4]= ui->Location5->text().toInt();
}

void window::on_Length_valueChanged()
{
    length= ui->Length->text().toInt();
}
void window::on_StartButtom_clicked()
{
    PlayRoom* playRoom = new PlayRoom();
    vector<int> locationVector;
    for(int i =0;i<5;i++)
        locationVector.push_back(location[i]);
    int maxTime = 0;
    int minTime = 0;
    playRoom->createGame(locationVector,length,maxTime,minTime);
    ui->Maxtime->setText(QString::number(maxTime));
    ui->MinTime->setText(QString::number(minTime));
}

void window::on_ExitButtom_clicked()
{
    abort();
}
