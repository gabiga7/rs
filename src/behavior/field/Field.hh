#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include <memory>
#include <algorithm>
#include "Player.hh"  // Assume Player header is properly defined
#include "Ball.hh"    // Assume Ball header is properly defined

class Field 
{
public:
    // Constructor
    Field(int width, int height);

    // Copy constructor
    Field(const Field& other);

    // Copy assignment operator
    Field& operator=(const Field& other);

    // Destructor
    ~Field();

    // Methods to manage players
    void addPlayer(const Player& player);
    void removePlayer(Team playersTeam, int playerNumber);

    // Getters
    int getWidth() const;
    int getHeight() const;
    const std::vector<Player>& getPlayers() const;
    Ball* getBall() const;

    // Setters
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    void setBall(const Ball& newBall);

private:
    int width_;
    int height_;
    std::vector<Player> players_;        // Holds players
    std::unique_ptr<Ball> ball_;         // Unique ownership of ball
};

#endif // FIELD_H