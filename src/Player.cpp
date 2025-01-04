#include "Player.h"
#include <iostream>

// Constructor
Player::Player(const QPixmap &pixmap, QGraphicsItem *parent) 
    : QGraphicsPixmapItem(pixmap, parent) {
    Position = {350.0f,550.0f};
    lives = 3; 
    setPos(Position[0], Position[1]);
}

// Constructor
Player::Player(QGraphicsItem *parent) {
    Position = {100.0f,100.0f};
    lives = 3; 
    setPos(Position[0], Position[1]);
}

// Move the player
void Player::move (float dx, float dy, float max_x, float max_y) {
    std::cout << max_x << ", " << max_y << std::endl;
    if (Position[0] + dx < 0 || Position[0] + dx > max_x) {
        return;
    }
    else if (Position[1] + dy < 0 || Position[1] + dy > max_y) {
        return;
    }
    Position[0] += dx;
    Position[1] += dy;
    setPos(Position[0], Position[1]);
    std::cout << "Player position: " << Position[0] << ", " << Position[1] << std::endl;
}

// Reset the players position
void Player::resetPosition() {
    Position = {0.0f, 0.0f};
    setPos(Position[0], Position[1]);
}

// Get players position
std::vector<float> Player::getPosition() const {
    return Position;
}

// Get players number of lives
int Player::getLives() const {
    return lives;
}

// Decreases players lives by -1
void Player::loseLife() {
    if (lives > 0) {
        lives--;
    }
}




