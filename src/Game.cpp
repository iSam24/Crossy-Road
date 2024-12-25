#include "Game.h"
#include "Vehicle.h"
#include "Player.h"
#include <iostream>
#include <QGraphicsScene>
#include <QDebug>

// Constructor
Game::Game(QGraphicsScene *scene, Player *player, QWidget *parent)
    : QWidget(parent), scene(scene), player(player), isRunning(true), score(0) {
    scene->addItem(player); // Add the player to the scene
    setFocusPolicy(Qt::StrongFocus); // Ensure this widget receives key events
    setFocus();
}

// Initialise vehicles with starting position and speed
void Game::initialiseVehicles() {
    vehicles.push_back(Vehicle({0.0f,10.0f},2,Direction::LEFT)); // Examples
    vehicles.push_back(Vehicle({0.0f,15.0f},2,Direction::LEFT));
}

// Start the game
void Game::start() {
    isRunning = true;
    qDebug() << "Game started";
}

// Handle user input
void Game::keyPressEvent(QKeyEvent *event) {
    std::cout << "Key pressed" << std::endl;
    switch(event->key()){
        case Qt::Key_W:
            player.move(0,-10);
            std::cout << "W key pressed" << std::endl;
            break;
        case Qt::Key_S:
            player.move(0,10);
            std::cout << "S key pressed" << std::endl;
            break;
        case Qt::Key_A:
            player.move(-10,0);
            std::cout << "A key pressed" << std::endl;
            break;
        case Qt::Key_D:
            player.move(10,0);
            std::cout << "D key pressed" << std::endl;
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


