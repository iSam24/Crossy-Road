#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>


// player
class Player : public QGraphicsPixmapItem {
    private:
        std::vector<float> Position; // Stores the players position [x,y]
        int lives; // Number of lives

    public:
        explicit Player(const QPixmap &pixmap, QGraphicsItem *parent = nullptr); // Constructor
        Player(QGraphicsItem *parent = nullptr); 
        void move(float dx, float dy, float max_x, float max_y); // move the player
        void resetPosition();
        std::vector<float> getPosition() const; // Get current position
        int getLives() const; // Get number of lives
        void loseLife(); // Decrease lives by 1
};

#endif // PLAYER_H