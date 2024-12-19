#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    setWindowTitle("My Qt Application");  // Set the window title
    resize(800, 600);                     // Set initial size
}

MainWindow::~MainWindow() {
    // Cleanup, if needed
}