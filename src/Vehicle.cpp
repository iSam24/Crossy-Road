#include "Vehicle.h"
#include "Direction.h"

// Parameterized constructor
Vehicle::Vehicle(const QPixmap &pixmap, QGraphicsItem *parent, const std::vector<float>& position, int speed, Direction direction)
    : QGraphicsPixmapItem(pixmap), Position(position), speed(speed), direction(direction) {
    setPos(Position[0], Position[1]);
}

// Updates vehicles position
void setPosition() {

}

// Sets vehicles speed
void setSpeed() {

}

// Sets vehicles direction
void setDirection() {

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
