#include "Field.hh"

int Field::getWidth() const { return width; }

int Field::getHeight() const { return height; }

const std::vector<Player>& Field::getPlayers() const { return players; }

Ball* Field::getBall() const { return ball.get(); }

// Setters
void Field::setWidth(int newWidth) { width = newWidth; }

void Field::setHeight(int newHeight) { height = newHeight; }

void Field::setBall(const Ball& newBall) 
{
    ball = std::make_unique<Ball>(newBall);
}