#ifndef PLAYER_HH
#define PLAYER_HH

// Include necessary headers here
#include <string>
#include "../position/Position.hh"
#include "../team/Team.hh"

// Forward declaration of Field if Player needs to interact with Field objects
class Field;

class Player {
public:
    // Constructor
    Player(Field* field, Team team, Position position, const std::string& name, int number);

    // Destructor
    ~Player();

    // Copy constructor
    Player(const Player& other);

    // Copy assignment operator
    Player& operator=(const Player& other);

    // Move the player to a new position on the field
    void move(const Position& newPosition);

    // Pass the ball to another player
    void pass(Player& target);

    // Getters
    Field* getField() const;
    Team getTeam() const;
    Position getPosition() const;
    std::string getName() const;
    int getNumber() const;

    // Setters
    void setField(Field* newField);
    void setTeam(Team newTeam);
    void setPosition(const Position& newPosition);
    void setName(const std::string& newName);
    void setNumber(int newNumber);

    // Tackle another player
    void tackle(Player& target);

    // Other actions (to be defined)
    // ...

private:
    Field* field_;  // Non-owning pointer to the Field
    Team team_;
    Position position_;
    std::string name_;
    int number_;
};
#endif // PLAYER_HH
