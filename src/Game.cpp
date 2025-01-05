#include "Game.h"
#include "Vehicle.h"
#include "Player.h"
#include <iostream>
#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsView>

// Constructor
Game::Game(QGraphicsScene *scene, Player *player, QWidget *parent)
    : scene(scene), player(player), QWidget(parent), isRunning(true), score(0), 
    movementTimer(new QTimer(this)) {
    setFocusPolicy(Qt::StrongFocus); // Ensure this widget receives key events
    setFocus();

    // Connect timer to updatePlayerMovement method
    connect(movementTimer, &QTimer::timeout, this, &Game::updatePlayerMovement);
    movementTimer->start(16); // Update every 16 ms (~60 FPS)
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

void Game::updatePlayerMovement() {
    int boundary = getGameWidth() - 50; // 50 is the player size (need to link this to the attribute in mainwindow)
    // Check which keys are pressed and move the player accordingly
    if(keysPressed.contains(Qt::Key_W)) {
        player->move(0, -10, boundary, boundary);
        std::cout << "W pressed" << std::endl;
    }
    if(keysPressed.contains(Qt::Key_S)) {
        player->move(0, 10, boundary, boundary);
        std::cout << "S pressed" << std::endl;
    }
    if(keysPressed.contains(Qt::Key_A)) {
        player->move(-10, 0, boundary, boundary);
        std::cout << "A pressed" << std::endl;
    }
    if(keysPressed.contains(Qt::Key_D)) {
        player->move(10, 0, boundary, boundary);
        std::cout << "D pressed" << std::endl;
    }

    update(); // Update the viewport
}

void Game::keyPressEvent(QKeyEvent *event) {
    // Add the pressed key to the set if it's not already there
    if(!event->isAutoRepeat()) {
        keysPressed.insert(event->key());
    }
}

void Game::keyReleaseEvent(QKeyEvent *event) {
    // Remove the released key from the set
    if(!event->isAutoRepeat()) {
        keysPressed.remove(event->key());
    }
}

// Update the game 
void Game::update() {
    // print vehicles
    // update score
}

// Check for player collisions
void Game::checkCollision() {

}

// Getter for isRunning
bool Game::getIsRunning() const {
    return isRunning;
};

// Getter for GAME_WIDTH
float Game::getGameWidth() const {
    return GAME_WIDTH;
}

// Getter for GAME_HEIGHT
float Game::getGameHeight() const {
    return GAME_HEIGHT;
}
