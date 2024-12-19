#ifndef PLAYER_H
#define PLAYER_H

#include <vector>


// player
class Player : public QGraphicsItem {
    private:
        std::vector<float> Position; // Stores the players position [x,y]
        int lives; // Number of lives

    public:
        Player(); // Constructor
        void move(float dx, float dy); // move the player
        void resetPosition();
        std::vector<float> getPosition() const; // Get current position
        int getLives() const; // Get number of lives
        void loseLife(); // Decrease lives by 1

        void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
        QRectF boundingRect() const override;
};

#endif // PLAYER_H