#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Player.h"
#include "Vehicle.h"

class Game {
private:
    Player player; // The player object
    std::vector<Vehicle> vehicles; // Collection of vehicles
    bool isRunning; // Tracks whether the game is active
    int score; // Tracks the player's score

    void initialiseVehicles(); // Helper to initialize vehicles
    void userInput(); // Handle user input
    void update(); // Update game state
    void checkCollision(); // Check for collisions
    void render(); // Render the game state

public:
    Game(); // Constructor
    void start(); // Start the game loop
};

#endif // GAME_H