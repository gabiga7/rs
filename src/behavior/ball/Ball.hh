#ifndef BALL_HH
#define BALL_HH

#include "../position/Position.hh"
#include "../field/Field.hh"

class Ball
{
public:
    // Constructor
    Ball(Field::Field* field, Position::Position position);

    // Destructor
    ~Ball();

    // Copy constructor
    Ball(const Ball& other);

    // Copy assigment operator
    Ball& operator=(const Ball& other);

    // Getters
    Field* getField() const;
    Position getPosition() const;

    // Setters
    void setField(Field* newField);
    void setPosition(const Position& newPosition);

private:
    Field::Field* field_;
    Position::Position position_;
}