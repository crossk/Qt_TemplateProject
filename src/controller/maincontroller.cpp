#include "maincontroller.h"

MainController::MainController(QApplication *app)
{
    this->app = app;
}

MainController::~MainController()
{

}

int MainController::runApplication()
{
    mainWindow = new MainWindow();
    mainWindow->show();

    return app->exec();
}
