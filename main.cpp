#include "Welcom.h"
#include <QtWidgets/QApplication>
#include <Qpixmap.h>
#include <QSplashScreen.h>
#include <qthread.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("welcom.png");
    QSplashScreen splash(pixmap);
    splash.show();
    QThread::msleep(1500);
    Welcom w;
    w.show();
    splash.finish(&w);
    return a.exec();
}
