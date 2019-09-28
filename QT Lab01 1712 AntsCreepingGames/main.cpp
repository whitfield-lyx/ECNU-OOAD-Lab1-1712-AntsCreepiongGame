#include <QApplication>

#include "window.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    window mywindow;
    mywindow.show();
    return app.exec();
}
