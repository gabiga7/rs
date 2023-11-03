#include "Field.hh"

// Constructor
Field::Field(int width, int height)
    :
    width(width),
    height(height),
    ball(nullptr)
{}

// Copy constructor
Field::Field(const Field& other)
    :
    width(other.width),
    height(other.height),
    players(other.players)
{
    if (other.ball)
    {
        ball = std::make_unique<Ball>(*other.ball);
    }
}

Field& Field::operator=(const Field& other)
{
    if (this != &other)
    {
        width = other.width;
        height = other.height;
        players = other.players;
        ball = other.ball ? std::make_unique<Ball>(*other.ball) : nullptr;
    }
    return *this;
}

Field::~Field()

// Implementation of methods addPlayer, removePlayer...
// std::vector<Player> players; <= On garde en tête ceci
// Il faut aller sur le super site suivant : https://en.cppreference.com/w/ et rechercher <vector>
void Field::addPlayer(const Player& player)
{
    players.push_back(player);
}

void Field::removePlayer(Team playersTeam, int playerNumber)
{
    players.erase(
        std::remove_if(
            players.begin(),
            players.end(),
            [playerTeam, playerNumber](const Player& player)
            {
                return player.getTeam() == playerTeam && player.getNumber() == playerNumber;
            }
        ),
        player.end()
    );
}