#ifndef PLAYER_HH
#define PLAYER_HH

// Include necessary headers here
#include <string>
#include "Position.hh"

// Forward declaration of Terrain if Player needs to interact with Terrain objects
class Terrain;

class Player 
{
public:
    // Constructor
    Player(Terrain* terrain, Position position, const std::string& name, int number);

    // Destructor
    ~Player();

    // Copy constructor and copy assignment operator
    Player(const Player& other);
    Player& operator=(const Player& other);

    // Member functions
    void move(int x, int y); // Moves the player to a new position on the terrain
    void pass(Player& target); // Pass the ball to another player

    // Getters and setters as needed
    Position getPosition() const;
    std::string getName() const;
    int getNumber() const;
    // ... More getters and setters

    // Additional player behaviors
    void tackle(Player& target); // Tackle another player
    // ... Other actions

private:
    // Member variables
    Terrain* terrain; // Raw pointer is sufficient if Terrain owns Player
    Position position;
    std::string name;
    int number;
};

#endif // PLAYER_HH
