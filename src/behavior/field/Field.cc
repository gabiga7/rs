#include "Field.hh"

// Constructor
Field::Field(int width_, int height_)
    :
    width_(width_),
    height_(height_),
    ball_(nullptr)
{}

// Copy constructor
Field::Field(const Field& other)
    :
    width_(other.width_),
    height_(other.height_),
    players(other.players)
{
    if (other.ball_)
    {
        ball_ = std::make_unique<Ball>(*other.ball_);
    }
}

Field& Field::operator=(const Field& other)
{
    if (this != &other)
    {
        width_ = other.width_;
        height_ = other.height_;
        players = other.players;
        ball_ = other.ball_ ? std::make_unique<Ball>(*other.ball_) : nullptr;
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