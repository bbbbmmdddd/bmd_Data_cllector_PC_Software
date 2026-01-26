#include "Welcom.h"
#include <QtWidgets/QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QThread>
//#include <QWebEngineView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("welcom.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    QThread::msleep(1500);
    Welcom w;
    //w.setWindowTitle("");
    w.show();
    splash.finish(&w);
    return a.exec();
}
