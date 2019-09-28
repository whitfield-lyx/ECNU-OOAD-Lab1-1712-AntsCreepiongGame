/********************************************************************************
** Form generated from reading UI file 'antscreepinggame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANTSCREEPINGGAME_H
#define UI_ANTSCREEPINGGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AntsCreepingGame
{
public:
    QLabel *label;

    void setupUi(QWidget *AntsCreepingGame)
    {
        if (AntsCreepingGame->objectName().isEmpty())
            AntsCreepingGame->setObjectName(QStringLiteral("AntsCreepingGame"));
        AntsCreepingGame->resize(551, 441);
        label = new QLabel(AntsCreepingGame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 330, 72, 15));

        retranslateUi(AntsCreepingGame);

        QMetaObject::connectSlotsByName(AntsCreepingGame);
    } // setupUi

    void retranslateUi(QWidget *AntsCreepingGame)
    {
        AntsCreepingGame->setWindowTitle(QApplication::translate("AntsCreepingGame", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AntsCreepingGame", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AntsCreepingGame: public Ui_AntsCreepingGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANTSCREEPINGGAME_H
