#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QLatin1String>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    //open qss file
    QFile file(":/Obit/Obit.qss");
    file.open(QFile::ReadOnly);

    QString styleSheet { QLatin1String(file.readAll()) };

    //setup stylesheet
    app.setStyleSheet(styleSheet);

    w.show();
    return app.exec();
}
