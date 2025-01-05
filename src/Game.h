#ifndef GAME_H
#define GAME_H

#include <QKeyEvent>
#include <Qwidget>
#include <QSet>
#include <QTimer>
#include <vector>
#include "Player.h"
#include "Vehicle.h"
#include "MainWindow.h"

// Forward declaration of MainWindow class
class MainWindow;

class Game : public QWidget {
    Q_OBJECT

private:
    Player* player; // The player object
    std::vector<Vehicle> vehicles; // Collection of vehicles
    bool isRunning; // Tracks whether the game is active
    int score; // Tracks the player's score
    QGraphicsScene *scene; // Declare scene
    const float GAME_WIDTH = 800.0f;
    const float GAME_HEIGHT = 600.0f;
    QSet<int> keysPressed;   // Set of keys currently pressed
    QTimer *movementTimer;  // Timer for continuous movement

public:
    Game(QGraphicsScene *scene, Player *player, QWidget *parent = nullptr); // Constructor
    void start(); // Start the game loop
    void initialiseVehicles(); // Helper to initialize vehicles
    void update(); // Update game state
    void checkCollision(); // Check for collisions
    bool getIsRunning() const; // Getter for isRunning
    float getGameWidth() const; // Getter for GAME_WIDTH
    float getGameHeight() const; // Getter for GAME_HEIGHT
    void keyPressEvent(QKeyEvent *event) override; // Handle key press
    void keyReleaseEvent(QKeyEvent *event) override; // Handle key release
    Player getPlayer(); // Getter for player
    void updatePlayerMovement(); // Update player movement
};

#endif // GAME_H