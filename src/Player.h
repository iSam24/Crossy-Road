#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>


// player
class Player : public QGraphicsPixmapItem {
    private:
        std::vector<float> Position; // Stores the players position [x,y]
        int lives; // Number of lives

    public:
        Player() : lives(3), Position{0,0} {} // Default constructor
        Player(const QPixmap &pixmap); // Constructor
        void move(float dx, float dy); // move the player
        void resetPosition();
        std::vector<float> getPosition() const; // Get current position
        int getLives() const; // Get number of lives
        void loseLife(); // Decrease lives by 1
};

#endif // PLAYER_H