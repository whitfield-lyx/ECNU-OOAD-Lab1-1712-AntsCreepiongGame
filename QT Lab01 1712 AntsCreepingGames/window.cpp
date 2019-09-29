#include "window.h"

window::window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("anticon.ico"));
    MaxAnts[0]=ui->MaxAnt1;
    MaxAnts[1]=ui->MaxAnt2;
    MaxAnts[2]=ui->MaxAnt3;
    MaxAnts[3]=ui->MaxAnt4;
    MaxAnts[4]=ui->MaxAnt5;

    MinAnts[0]=ui->MinAnt1;
    MinAnts[1]=ui->MinAnt2;
    MinAnts[2]=ui->MinAnt3;
    MinAnts[3]=ui->MinAnt4;
    MinAnts[4]=ui->MinAnt5;
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
    maxAnimationGroup = new QParallelAnimationGroup;
    minAnimationGroup = new QParallelAnimationGroup;
    PlayRoom* playRoom = new PlayRoom();
    vector<int> locationVector;
    for(int i =0;i<5;i++)
        locationVector.push_back(location[i]);
    int maxTime = 0;
    int minTime = 0;
    playRoom->createGame(locationVector,length,maxTime,minTime);
    ui->Maxtime->setText(QString::number(maxTime));
    ui->MinTime->setText(QString::number(minTime));

    for(int i=0;i<5;i++){
        pSetMaxAntsOpacityToOne = new QGraphicsOpacityEffect(MaxAnts[i]);
        pSetMaxAntsOpacityToOne->setOpacity(1);
        MaxAnts[i]->setGraphicsEffect(pSetMaxAntsOpacityToOne);

        if(location[i]<length&&location[i]>=0){
            maxanim[i]=new QPropertyAnimation(MaxAnts[i],"pos");
            maxanim[i]->setDuration(maxTime*100);
            maxanim[i]->setStartValue(QPoint(50+(600/(double)length)*location[i],380));
                if(location[i]<length/2)
                    maxanim[i]->setEndValue(QPoint(650,380));
                else
                    maxanim[i]->setEndValue(QPoint(50,380));
        }
        else{
            maxanimalpha[i]=new QPropertyAnimation(pSetMaxAntsOpacityToOne,"opacity");
            maxanimalpha[i]->setDuration(10);
            maxanimalpha[i]->setStartValue(1);
            maxanimalpha[i]->setEndValue(0);
            maxanimalpha[i]->start(QAbstractAnimation::DeleteWhenStopped);
        }
        maxAnimationGroup->addAnimation(maxanim[i]);


        pSetMinAntsOpacityToOne = new QGraphicsOpacityEffect(MinAnts[i]);
        pSetMinAntsOpacityToOne->setOpacity(1);
        MinAnts[i]->setGraphicsEffect(pSetMinAntsOpacityToOne);

        if(location[i]<length&&location[i]>=0){
            minanim[i]=new QPropertyAnimation(MinAnts[i], "pos");
            minanim[i]->setDuration(minTime*100);
            minanim[i]->setStartValue(QPoint(50+(600/(double)length)*location[i],540));
                if(location[i]<length/2)
                     minanim[i]->setEndValue(QPoint(50,540));
                else
                     minanim[i]->setEndValue(QPoint(650,540));
        }
        else{
            minanimalpha[i]=new QPropertyAnimation(pSetMinAntsOpacityToOne,"opacity");
            minanimalpha[i]->setDuration(10);
            minanimalpha[i]->setStartValue(1);
            minanimalpha[i]->setEndValue(0);
            minanimalpha[i]->start(QAbstractAnimation::DeleteWhenStopped);
        }
        minAnimationGroup->addAnimation(minanim[i]);
    }
    maxAnimationGroup->start();
    minAnimationGroup->start();
}

void window::on_ResetButtom_clicked()
{

    length=0;
    for(int i=0;i<5;i++)
        location[i]=0;
    ui->Location1->setValue(0);
    ui->Location2->setValue(0);
    ui->Location3->setValue(0);
    ui->Location4->setValue(0);
    ui->Location5->setValue(0);
    ui->Length->setValue(0);
    ui->Maxtime->setText(QString::number(0));
    ui->MinTime->setText(QString::number(0));

}
