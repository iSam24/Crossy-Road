#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT  // Enables Qt's signal and slot mechanism

public:
    explicit MainWindow(QWidget *parent = nullptr);  // Constructor
    ~MainWindow();                                   // Destructor
};

#endif // MAINWINDOW_H