#include "Player.hh"
#include "Player.hxx" // Include the inline definitions

// Constructor implementation
Player::Player(Field* field, Team team, Position position, const std::string& name, int number)
    : 
    field_(field), 
    team_(team), 
    position_(position), 
    name_(name), 
    number_(number) 
{}

// Copy constructor implementation
Player::Player(const Player& other)
    : 
    field_(other.field_), 
    team_(other.team_), 
    position_(other.position_), 
    name_(other.name_), 
    number_(other.number_) 
{}

// Copy assignment operator implementation
Player::Player& Player::operator=(const Player& other) 
{
    if (this != &other) 
    {
        field_ = other.field_;
        team_ = other.team_;
        position_ = other.position_;
        name_ = other.name_;
        number_ = other.number_;
    }
    return *this;
}

// Other methods (move, pass, tackle) are not implemented yet
