#include "Ball.hh"

// Getters
Field::Field* Ball::getField() const { return field_; }
Position:Position Ball::getPosition() const { return position_; }

// Setters
void Ball::setField(Field::Field* newField) { field_ = newField; }
void Ball::setPosition(const Position::Position newPosition) { posiion_ = newPosition; }