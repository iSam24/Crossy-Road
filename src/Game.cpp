#include "Game.h"
#include "Vehicle.h"
#include "Player.h"
#include <iostream>

// Constructor
Game::Game(QWidget *parent) : QWidget(parent), player(Player()), isRunning(true), score(0) {
    initialiseVehicles();
}

// Initialise vehicles with starting position and speed
void Game::initialiseVehicles() {
    vehicles.push_back(Vehicle({0.0f,10.0f},2,Direction::LEFT)); // Examples
    vehicles.push_back(Vehicle({0.0f,15.0f},2,Direction::LEFT));
}

// Start the game
void Game::start() {

}

// Handle user input
void Game::keyPressEvent(QKeyEvent *event) {
    switch(event->key()){
        case Qt::Key_Up:
            player.move(0,-1);
            std::cout << "Up key pressed" << std::endl;
            break;
        case Qt::Key_Down:
            player.move(0,1);
            std::cout << "Down key pressed" << std::endl;
            break;
        case Qt::Key_Left:
            player.move(-1,0);
            std::cout << "Left key pressed" << std::endl;
            break;
        case Qt::Key_Right:
            player.move(1,0);
            std::cout << "Right key pressed" << std::endl;
            break;
        default:
            QWidget::keyPressEvent(event);
    }
}

// Update the game 
void Game::update() {
    // move vehicles
    // update score
}

// Check for player collisions
void Game::checkCollision() {

}
// Getter for isRunning
bool Game::getIsRunning() const {
    return isRunning;
};


