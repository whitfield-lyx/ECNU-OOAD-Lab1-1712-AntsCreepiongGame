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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QPushButton *ResetButtom;
    QLabel *setLengthLabel;
    QSpinBox *Length;
    QFrame *line;
    QFrame *line_2;
    QRadioButton *MaxAnt1;
    QRadioButton *MaxAnt2;
    QRadioButton *MaxAnt3;
    QRadioButton *MaxAnt4;
    QRadioButton *MaxAnt5;
    QRadioButton *MinAnt3;
    QRadioButton *MinAnt1;
    QRadioButton *MinAnt2;
    QRadioButton *MinAnt4;
    QRadioButton *MinAnt5;

    void setupUi(QDialog *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->setEnabled(true);
        window->resize(685, 664);
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
        Location1->setMaximumSize(QSize(81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(10);
        Location1->setFont(font);
        Location1->setCursor(QCursor(Qt::IBeamCursor));
        Location1->setMaximum(9999);
        Location2 = new QSpinBox(window);
        Location2->setObjectName(QStringLiteral("Location2"));
        Location2->setEnabled(true);
        Location2->setGeometry(QRect(150, 90, 81, 41));
        Location2->setMaximumSize(QSize(81, 41));
        Location2->setFont(font);
        Location2->setCursor(QCursor(Qt::IBeamCursor));
        Location2->setMaximum(9999);
        Location3 = new QSpinBox(window);
        Location3->setObjectName(QStringLiteral("Location3"));
        Location3->setEnabled(true);
        Location3->setGeometry(QRect(260, 90, 81, 41));
        Location3->setMaximumSize(QSize(81, 41));
        Location3->setFont(font);
        Location3->setCursor(QCursor(Qt::IBeamCursor));
        Location3->setMaximum(9999);
        Location4 = new QSpinBox(window);
        Location4->setObjectName(QStringLiteral("Location4"));
        Location4->setEnabled(true);
        Location4->setGeometry(QRect(370, 90, 81, 41));
        Location4->setMaximumSize(QSize(81, 41));
        Location4->setFont(font);
        Location4->setCursor(QCursor(Qt::IBeamCursor));
        Location4->setMaximum(9999);
        Location5 = new QSpinBox(window);
        Location5->setObjectName(QStringLiteral("Location5"));
        Location5->setEnabled(true);
        Location5->setGeometry(QRect(480, 90, 81, 41));
        Location5->setMaximumSize(QSize(81, 41));
        Location5->setFont(font);
        Location5->setCursor(QCursor(Qt::IBeamCursor));
        Location5->setMaximum(9999);
        setLocationLabel = new QLabel(window);
        setLocationLabel->setObjectName(QStringLiteral("setLocationLabel"));
        setLocationLabel->setEnabled(true);
        setLocationLabel->setGeometry(QRect(40, 10, 571, 31));
        setLocationLabel->setMaximumSize(QSize(571, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        setLocationLabel->setFont(font1);
        ant1 = new QLabel(window);
        ant1->setObjectName(QStringLiteral("ant1"));
        ant1->setEnabled(true);
        ant1->setGeometry(QRect(40, 50, 41, 31));
        ant1->setMaximumSize(QSize(41, 31));
        ant1->setFont(font);
        ant2 = new QLabel(window);
        ant2->setObjectName(QStringLiteral("ant2"));
        ant2->setEnabled(true);
        ant2->setGeometry(QRect(150, 50, 41, 31));
        ant2->setMaximumSize(QSize(41, 31));
        ant2->setFont(font);
        ant3 = new QLabel(window);
        ant3->setObjectName(QStringLiteral("ant3"));
        ant3->setEnabled(true);
        ant3->setGeometry(QRect(260, 50, 41, 31));
        ant3->setMaximumSize(QSize(41, 31));
        ant3->setFont(font);
        ant4 = new QLabel(window);
        ant4->setObjectName(QStringLiteral("ant4"));
        ant4->setEnabled(true);
        ant4->setGeometry(QRect(370, 50, 41, 31));
        ant4->setMaximumSize(QSize(41, 31));
        ant4->setFont(font);
        ant5 = new QLabel(window);
        ant5->setObjectName(QStringLiteral("ant5"));
        ant5->setEnabled(true);
        ant5->setGeometry(QRect(480, 50, 41, 31));
        ant5->setMaximumSize(QSize(41, 31));
        ant5->setFont(font);
        MaxtimeLabel = new QLabel(window);
        MaxtimeLabel->setObjectName(QStringLiteral("MaxtimeLabel"));
        MaxtimeLabel->setEnabled(true);
        MaxtimeLabel->setGeometry(QRect(70, 280, 131, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setWeight(50);
        MaxtimeLabel->setFont(font2);
        MinTimeLabel = new QLabel(window);
        MinTimeLabel->setObjectName(QStringLiteral("MinTimeLabel"));
        MinTimeLabel->setEnabled(true);
        MinTimeLabel->setGeometry(QRect(70, 449, 121, 51));
        MinTimeLabel->setFont(font2);
        Maxtime = new QLabel(window);
        Maxtime->setObjectName(QStringLiteral("Maxtime"));
        Maxtime->setEnabled(true);
        Maxtime->setGeometry(QRect(250, 280, 211, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
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
        MinTime->setGeometry(QRect(250, 450, 211, 51));
        MinTime->setFont(font3);
        MinTime->setContextMenuPolicy(Qt::DefaultContextMenu);
        MinTime->setLayoutDirection(Qt::LeftToRight);
        MinTime->setFrameShape(QFrame::WinPanel);
        MinTime->setFrameShadow(QFrame::Plain);
        MinTime->setLineWidth(1);
        MinTime->setMidLineWidth(0);
        StartButtom = new QPushButton(window);
        StartButtom->setObjectName(QStringLiteral("StartButtom"));
        StartButtom->setEnabled(true);
        StartButtom->setGeometry(QRect(100, 600, 171, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font4.setPointSize(16);
        StartButtom->setFont(font4);
        ResetButtom = new QPushButton(window);
        ResetButtom->setObjectName(QStringLiteral("ResetButtom"));
        ResetButtom->setEnabled(true);
        ResetButtom->setGeometry(QRect(380, 600, 181, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Aa\345\205\203\346\260\224\346\273\241\346\273\241"));
        font5.setPointSize(16);
        ResetButtom->setFont(font5);
        setLengthLabel = new QLabel(window);
        setLengthLabel->setObjectName(QStringLiteral("setLengthLabel"));
        setLengthLabel->setEnabled(true);
        setLengthLabel->setGeometry(QRect(40, 163, 551, 31));
        setLengthLabel->setFont(font1);
        Length = new QSpinBox(window);
        Length->setObjectName(QStringLiteral("Length"));
        Length->setEnabled(true);
        Length->setGeometry(QRect(40, 210, 81, 41));
        Length->setFont(font);
        Length->setCursor(QCursor(Qt::IBeamCursor));
        Length->setMaximum(9999);
        line = new QFrame(window);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(50, 380, 611, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(window);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(50, 540, 611, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        MaxAnt1 = new QRadioButton(window);
        MaxAnt1->setObjectName(QStringLiteral("MaxAnt1"));
        MaxAnt1->setGeometry(QRect(50, 380, 21, 21));
        MaxAnt1->setMouseTracking(false);
        MaxAnt1->setIconSize(QSize(30, 30));
        MaxAnt2 = new QRadioButton(window);
        MaxAnt2->setObjectName(QStringLiteral("MaxAnt2"));
        MaxAnt2->setGeometry(QRect(50, 380, 21, 21));
        MaxAnt2->setMouseTracking(false);
        MaxAnt2->setIconSize(QSize(30, 30));
        MaxAnt3 = new QRadioButton(window);
        MaxAnt3->setObjectName(QStringLiteral("MaxAnt3"));
        MaxAnt3->setGeometry(QRect(50, 380, 21, 21));
        MaxAnt3->setMouseTracking(false);
        MaxAnt3->setIconSize(QSize(30, 30));
        MaxAnt4 = new QRadioButton(window);
        MaxAnt4->setObjectName(QStringLiteral("MaxAnt4"));
        MaxAnt4->setGeometry(QRect(50, 380, 21, 21));
        MaxAnt4->setMouseTracking(false);
        MaxAnt4->setIconSize(QSize(30, 30));
        MaxAnt5 = new QRadioButton(window);
        MaxAnt5->setObjectName(QStringLiteral("MaxAnt5"));
        MaxAnt5->setGeometry(QRect(50, 380, 21, 21));
        MaxAnt5->setMouseTracking(false);
        MaxAnt5->setIconSize(QSize(30, 30));
        MinAnt3 = new QRadioButton(window);
        MinAnt3->setObjectName(QStringLiteral("MinAnt3"));
        MinAnt3->setGeometry(QRect(50, 540, 21, 21));
        MinAnt3->setMouseTracking(false);
        MinAnt3->setIconSize(QSize(30, 30));
        MinAnt1 = new QRadioButton(window);
        MinAnt1->setObjectName(QStringLiteral("MinAnt1"));
        MinAnt1->setGeometry(QRect(50, 540, 21, 21));
        MinAnt1->setMouseTracking(false);
        MinAnt1->setIconSize(QSize(30, 30));
        MinAnt2 = new QRadioButton(window);
        MinAnt2->setObjectName(QStringLiteral("MinAnt2"));
        MinAnt2->setGeometry(QRect(50, 540, 21, 21));
        MinAnt2->setMouseTracking(false);
        MinAnt2->setIconSize(QSize(30, 30));
        MinAnt4 = new QRadioButton(window);
        MinAnt4->setObjectName(QStringLiteral("MinAnt4"));
        MinAnt4->setGeometry(QRect(50, 540, 21, 21));
        MinAnt4->setMouseTracking(false);
        MinAnt4->setIconSize(QSize(30, 30));
        MinAnt5 = new QRadioButton(window);
        MinAnt5->setObjectName(QStringLiteral("MinAnt5"));
        MinAnt5->setGeometry(QRect(50, 540, 21, 21));
        MinAnt5->setMouseTracking(false);
        MinAnt5->setIconSize(QSize(30, 30));

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
        ResetButtom->setText(QApplication::translate("window", "Reset", Q_NULLPTR));
        setLengthLabel->setText(QApplication::translate("window", "Please set the length of the stick:", Q_NULLPTR));
        MaxAnt1->setText(QString());
        MaxAnt2->setText(QString());
        MaxAnt3->setText(QString());
        MaxAnt4->setText(QString());
        MaxAnt5->setText(QString());
        MinAnt3->setText(QString());
        MinAnt1->setText(QString());
        MinAnt2->setText(QString());
        MinAnt4->setText(QString());
        MinAnt5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
