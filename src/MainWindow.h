#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "Player.h"
#include "Game.h"
#include "Vehicle.h"

// Forward declaration of the Game class
class Game;

class MainWindow : public QMainWindow {
    Q_OBJECT  // Enables Qt's signal and slot mechanism

public:
    explicit MainWindow(QWidget *parent = nullptr);  // Constructor
    ~MainWindow(); // Destructor

    QGraphicsScene* getScene() const; // Getter for the scene
    Player* getPlayer() const;        // Getter for the player
    Game* getGame() const;            // Getter for the game
    int   getPlayerSize() const; // Getter for player size

private:
    QGraphicsScene *scene; // The scene object
    Player *player;        // The player object
    Vehicle *vehicle;      // The vehicle object
    Game *game;            // The game object
    int PlayerSize = 50;   // Size of the player
    int vehicleSize = 60;  // Size of the vehicle
};

#endif // MAINWINDOW_H