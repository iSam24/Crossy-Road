#include "Vehicle.h"
#include "Direction.h"

// Default constructor
Vehicle::Vehicle() : Position{0.0f,0.0f}, speed(1), direction(Direction::UP) {}

// Parameterized constructor
Vehicle::Vehicle(const std::vector<float>& position, int speed, Direction direction)
    : Position(position), speed(speed), direction(direction) {}

// Updates vehicles position
void updatePosition() {

}

// Resets vehicles position
void resetPosition() {

}

// Gets vehicles position
void getPosition() {

}

// Gets vehicles speed
void getSpeed() {

}

// Gets vehicles direction
void getdirection() {

}

// Sets vehicles speed
void setSpeed() {

}

// Sets vehicles direction
void setDirection() {
    
}