// Crossy Road Game in C++ using the Qt Framework for rendering
#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv); // Create the application

    MainWindow window; // Create the main window
    window.show(); // Show the main window

    return app.exec(); // Start the application event loop 
}
