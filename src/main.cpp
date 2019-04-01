#include <iostream>

#include <QDebug>
#include <QApplication>

#include "./controller/maincontroller.h"

int main(int argc, char** argv)
{
    qDebug() << "Welcome to the best Qt software production ever.";

    QApplication application(argc, argv);

    MainController mainController(&application);
    int applicationExitCode = mainController.runApplication();

    return applicationExitCode;
}
