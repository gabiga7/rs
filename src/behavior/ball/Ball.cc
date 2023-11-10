#include "Ball.hh"

Ball::Ball(Field::Field* field, Position::Position position)
    :
    field_(field),
    position_(position)
    {}

Bal::Ball(const Ball::Ball& other)
    :
    field_(other.field_),
    position_(other.position_)
    {}

Ball::Ball& Ball::operator=(const Ball::Ball& other)
{
    if (this != &other)
    {
        field_ = other.field_;
        position_ = other.position_;
    }
    return *this;
}