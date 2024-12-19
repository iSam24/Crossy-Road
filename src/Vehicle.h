#ifndef VEHICLE_H
#define VEHICLE_H

#include <vector>
#include "Direction.h" // Direction enum


class Vehicle {
    private:
        std::vector<float> Position; // Stores the vehicles position [x,y]
        int speed; // Speed of the vehicle
        Direction direction; // Direction of the vehicle

    public:
        // Default constructor
        Vehicle();

        // Parameterized constructor
        Vehicle(const std::vector<float>& position, int speed, Direction direction);

        void updatePosition();
        void resetPosition();

        // Getters
        std::vector<float> getPosition() const;
        int getSpeed() const;
        void getdirection() const;

        // Setters
        void setSpeed(int newSpeed);
        void setDirection(Direction newDirection);
};

#endif // VEHICLE_H