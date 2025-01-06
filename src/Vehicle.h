#ifndef VEHICLE_H
#define VEHICLE_H

#include <vector>
#include <QGraphicsPixmapItem>
#include "Direction.h" // Direction enum


class Vehicle : public QGraphicsPixmapItem {
    private:
        std::vector<float> Position; // Stores the vehicles position [x,y]
        int speed; // Speed of the vehicle
        Direction direction; // Direction of the vehicle

    public:

        // Parameterized constructor
        explicit Vehicle(const QPixmap &pixmap, QGraphicsItem *parent = nullptr,
                         const std::vector<float>& position = {0.0f, 0.0f},
                         int speed = 4, Direction direction = Direction::LEFT);

        // Getters
        std::vector<float> getPosition() const;
        int getSpeed() const;
        void getdirection() const;

        // Setters
        void setPosition();
        void setSpeed(int newSpeed);
        void setDirection(Direction newDirection);
};

#endif // VEHICLE_H