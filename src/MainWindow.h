#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "Player.h"
#include "Game.h"

class MainWindow : public QMainWindow {
    Q_OBJECT  // Enables Qt's signal and slot mechanism

public:
    explicit MainWindow(QWidget *parent = nullptr);  // Constructor
    ~MainWindow(); // Destructor

    QGraphicsScene* getScene() const; // Getter for the scene
    Player* getPlayer() const;        // Getter for the player
    Game* getGame() const;            // Getter for the game

private:
    QGraphicsScene *scene; // The scene object
    Player *player;        // The player object
    Game *game;            // The game object
};

#endif // MAINWINDOW_H