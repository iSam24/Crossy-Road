#include "Player.h"
#include <iostream>
#include <vector>

// Constructor
Player::Player() : Position{0.0f,0.0f}, lives(3) {}

// Move the player
void Player::move (float dx, float dy) {

}

// Reset the players position
void Player::resetPosition() {
    Position = {0.0f, 0.0f};
}

// Get players position
void Player::getPosition() const {
    return Position;
}

// Get players number of lives
void Player::getLives() const {
    return lives;
}

// Decreases players lives by -1
void Player::loseLife() const {
    if (lives > 0) {
        lives--;
    }
}

void Player::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    painter->setBrush(Qt::blue);
    painter->drawRect(Position[0], Position[1], 50, 50);
}

QRectF Player::boundingRect() const {
    return QRectF(Position[0], Position[1], 50, 50);
}



