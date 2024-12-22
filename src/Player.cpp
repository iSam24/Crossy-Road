#include "Player.h"

// Constructor
Player::Player(const QPixmap &pixmap) :  QGraphicsPixmapItem(pixmap){
    Position = {0.0f,0.0f};
    lives = 3; 
}

// Move the player
void Player::move (float dx, float dy) {
    Position[0] += dx;
    Position[1] += dy;
}

// Reset the players position
void Player::resetPosition() {
    Position = {0.0f, 0.0f};
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




