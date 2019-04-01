#include "../gui/mainwindow.h"
#include <QApplication>

#include <memory>

class MainController
{
public:
    MainController(QApplication *app);
    ~MainController();

    int runApplication();

private:
    // Variables
    QApplication *app;
    MainWindow *mainWindow;


    // Functions
};
