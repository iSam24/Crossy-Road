#ifndef GAME_H
#define GAME_H

#include <QKeyEvent>
#include <Qwidget>
#include <vector>
#include "Player.h"
#include "Vehicle.h"


class Game : public QWidget {
    Q_OBJECT

private:
    Player player; // The player object
    std::vector<Vehicle> vehicles; // Collection of vehicles
    bool isRunning; // Tracks whether the game is active
    int score; // Tracks the player's score
    QGraphicsScene *scene; // Declare scene
    const float GAME_WIDTH = 800.0f;
    const float GAME_HEIGHT = 600.0f;

public:
    Game(QGraphicsScene *scene, Player *player, QWidget *parent = nullptr); // Constructor
    void start(); // Start the game loop
    void initialiseVehicles(); // Helper to initialize vehicles
    void update(); // Update game state
    void checkCollision(); // Check for collisions
    bool getIsRunning() const; // Getter for isRunning
    float getGameWidth() const; // Getter for GAME_WIDTH
    float getGameHeight() const; // Getter for GAME_HEIGHT
    void keyPressEvent(QKeyEvent *event) override; // Handle user input
};

#endif // GAME_H