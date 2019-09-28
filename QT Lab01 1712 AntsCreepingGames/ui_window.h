/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QSpinBox *Location1;
    QSpinBox *Location2;
    QSpinBox *Location3;
    QSpinBox *Location4;
    QSpinBox *Location5;
    QLabel *setLocationLabel;
    QLabel *ant1;
    QLabel *ant2;
    QLabel *ant3;
    QLabel *ant4;
    QLabel *ant5;
    QLabel *MaxtimeLabel;
    QLabel *MinTimeLabel;
    QLabel *Maxtime;
    QLabel *MinTime;
    QPushButton *StartButtom;
    QPushButton *ExitButtom;
    QLabel *setLengthLabel;
    QSpinBox *Length;

    void setupUi(QDialog *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->setEnabled(true);
        window->resize(699, 453);
        window->setContextMenuPolicy(Qt::CustomContextMenu);
        window->setWindowOpacity(1);
        window->setLayoutDirection(Qt::LeftToRight);
        window->setAutoFillBackground(false);
        window->setSizeGripEnabled(false);
        window->setModal(false);
        Location1 = new QSpinBox(window);
        Location1->setObjectName(QStringLiteral("Location1"));
        Location1->setEnabled(true);
        Location1->setGeometry(QRect(40, 90, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font.setPointSize(10);
        Location1->setFont(font);
        Location1->setCursor(QCursor(Qt::IBeamCursor));
        Location1->setMaximum(9999);
        Location2 = new QSpinBox(window);
        Location2->setObjectName(QStringLiteral("Location2"));
        Location2->setEnabled(true);
        Location2->setGeometry(QRect(150, 90, 81, 41));
        Location2->setFont(font);
        Location2->setCursor(QCursor(Qt::IBeamCursor));
        Location2->setMaximum(9999);
        Location3 = new QSpinBox(window);
        Location3->setObjectName(QStringLiteral("Location3"));
        Location3->setEnabled(true);
        Location3->setGeometry(QRect(260, 90, 81, 41));
        Location3->setFont(font);
        Location3->setCursor(QCursor(Qt::IBeamCursor));
        Location3->setMaximum(9999);
        Location4 = new QSpinBox(window);
        Location4->setObjectName(QStringLiteral("Location4"));
        Location4->setEnabled(true);
        Location4->setGeometry(QRect(370, 90, 81, 41));
        Location4->setFont(font);
        Location4->setCursor(QCursor(Qt::IBeamCursor));
        Location4->setMaximum(9999);
        Location5 = new QSpinBox(window);
        Location5->setObjectName(QStringLiteral("Location5"));
        Location5->setEnabled(true);
        Location5->setGeometry(QRect(480, 90, 81, 41));
        Location5->setFont(font);
        Location5->setCursor(QCursor(Qt::IBeamCursor));
        Location5->setMaximum(9999);
        setLocationLabel = new QLabel(window);
        setLocationLabel->setObjectName(QStringLiteral("setLocationLabel"));
        setLocationLabel->setEnabled(true);
        setLocationLabel->setGeometry(QRect(40, 10, 571, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        setLocationLabel->setFont(font1);
        ant1 = new QLabel(window);
        ant1->setObjectName(QStringLiteral("ant1"));
        ant1->setEnabled(true);
        ant1->setGeometry(QRect(40, 50, 41, 31));
        ant1->setFont(font);
        ant2 = new QLabel(window);
        ant2->setObjectName(QStringLiteral("ant2"));
        ant2->setEnabled(true);
        ant2->setGeometry(QRect(150, 50, 41, 31));
        ant2->setFont(font);
        ant3 = new QLabel(window);
        ant3->setObjectName(QStringLiteral("ant3"));
        ant3->setEnabled(true);
        ant3->setGeometry(QRect(260, 50, 41, 31));
        ant3->setFont(font);
        ant4 = new QLabel(window);
        ant4->setObjectName(QStringLiteral("ant4"));
        ant4->setEnabled(true);
        ant4->setGeometry(QRect(370, 50, 41, 31));
        ant4->setFont(font);
        ant5 = new QLabel(window);
        ant5->setObjectName(QStringLiteral("ant5"));
        ant5->setEnabled(true);
        ant5->setGeometry(QRect(480, 50, 41, 31));
        ant5->setFont(font);
        MaxtimeLabel = new QLabel(window);
        MaxtimeLabel->setObjectName(QStringLiteral("MaxtimeLabel"));
        MaxtimeLabel->setEnabled(true);
        MaxtimeLabel->setGeometry(QRect(168, 250, 111, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        MaxtimeLabel->setFont(font2);
        MinTimeLabel = new QLabel(window);
        MinTimeLabel->setObjectName(QStringLiteral("MinTimeLabel"));
        MinTimeLabel->setEnabled(true);
        MinTimeLabel->setGeometry(QRect(443, 250, 111, 40));
        MinTimeLabel->setFont(font2);
        Maxtime = new QLabel(window);
        Maxtime->setObjectName(QStringLiteral("Maxtime"));
        Maxtime->setEnabled(true);
        Maxtime->setGeometry(QRect(158, 290, 121, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font3.setPointSize(20);
        Maxtime->setFont(font3);
        Maxtime->setMouseTracking(true);
        Maxtime->setTabletTracking(false);
        Maxtime->setFrameShape(QFrame::WinPanel);
        Maxtime->setFrameShadow(QFrame::Plain);
        Maxtime->setLineWidth(1);
        Maxtime->setTextFormat(Qt::AutoText);
        Maxtime->setScaledContents(false);
        MinTime = new QLabel(window);
        MinTime->setObjectName(QStringLiteral("MinTime"));
        MinTime->setEnabled(true);
        MinTime->setGeometry(QRect(443, 291, 121, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font4.setPointSize(20);
        font4.setKerning(true);
        MinTime->setFont(font4);
        MinTime->setContextMenuPolicy(Qt::DefaultContextMenu);
        MinTime->setLayoutDirection(Qt::LeftToRight);
        MinTime->setFrameShape(QFrame::WinPanel);
        MinTime->setFrameShadow(QFrame::Plain);
        MinTime->setLineWidth(1);
        MinTime->setMidLineWidth(0);
        StartButtom = new QPushButton(window);
        StartButtom->setObjectName(QStringLiteral("StartButtom"));
        StartButtom->setEnabled(true);
        StartButtom->setGeometry(QRect(130, 370, 171, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font5.setPointSize(16);
        StartButtom->setFont(font5);
        ExitButtom = new QPushButton(window);
        ExitButtom->setObjectName(QStringLiteral("ExitButtom"));
        ExitButtom->setEnabled(true);
        ExitButtom->setGeometry(QRect(410, 370, 181, 51));
        ExitButtom->setFont(font5);
        setLengthLabel = new QLabel(window);
        setLengthLabel->setObjectName(QStringLiteral("setLengthLabel"));
        setLengthLabel->setEnabled(true);
        setLengthLabel->setGeometry(QRect(40, 150, 551, 31));
        setLengthLabel->setFont(font1);
        Length = new QSpinBox(window);
        Length->setObjectName(QStringLiteral("Length"));
        Length->setEnabled(true);
        Length->setGeometry(QRect(40, 197, 81, 41));
        Length->setFont(font);
        Length->setCursor(QCursor(Qt::IBeamCursor));
        Length->setMaximum(9999);

        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QDialog *window)
    {
        window->setWindowTitle(QApplication::translate("window", "AntsCreepingGames", Q_NULLPTR));
        setLocationLabel->setText(QApplication::translate("window", "Please set the location of the ants:", Q_NULLPTR));
        ant1->setText(QApplication::translate("window", "Ant1", Q_NULLPTR));
        ant2->setText(QApplication::translate("window", "Ant2", Q_NULLPTR));
        ant3->setText(QApplication::translate("window", "Ant3", Q_NULLPTR));
        ant4->setText(QApplication::translate("window", "Ant4", Q_NULLPTR));
        ant5->setText(QApplication::translate("window", "Ant5", Q_NULLPTR));
        MaxtimeLabel->setText(QApplication::translate("window", "Maxtime\357\274\232", Q_NULLPTR));
        MinTimeLabel->setText(QApplication::translate("window", "Mintime\357\274\232", Q_NULLPTR));
        Maxtime->setText(QApplication::translate("window", "0", Q_NULLPTR));
        MinTime->setText(QApplication::translate("window", "0", Q_NULLPTR));
        StartButtom->setText(QApplication::translate("window", "Start", Q_NULLPTR));
        ExitButtom->setText(QApplication::translate("window", "Exit", Q_NULLPTR));
        setLengthLabel->setText(QApplication::translate("window", "Please set the length of the stick:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
