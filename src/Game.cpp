#include "Game.h"
#include "Vehicle.h"
#include "Player.h"
#include <iostream>
#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsView>

// Constructor
Game::Game(QGraphicsScene *scene, Player *player, QWidget *parent)
    : scene(scene), player(player), QWidget(parent), isRunning(true), score(0) {
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
    //int boundary = getGameWidth() - mainWindow->getPlayerSize();
    int boundary = getGameWidth() - 50; // 50 is the player size (need to link this to the attribute in mainwindow)
    switch(event->key()){
        case Qt::Key_W:
            player->move(0, -10, boundary, boundary);
            std::cout << "W key pressed" << std::endl;
            break;
        case Qt::Key_S:
            player->move(0, 10, boundary, boundary);
            std::cout << "S key pressed" << std::endl;
            break;
        case Qt::Key_A:
            player->move(-10, 0, boundary, boundary);
            std::cout << "A key pressed" << std::endl;
            break;
        case Qt::Key_D:
            player->move(10, 0, boundary, boundary);
            std::cout << "D key pressed" << std::endl;
            break;
        default:
            QWidget::keyPressEvent(event);
    }
    QGraphicsView *view = dynamic_cast<QGraphicsView*>(parentWidget());
    if (view) {
        view->viewport()->update(); // Request an update of the viewport
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
