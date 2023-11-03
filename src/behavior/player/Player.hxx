#ifndef PLAYER_HXX
#define PLAYER_HXX

#include "Player.hh"

inline Field* Player::getField() const { return field_; }
inline Team Player::getTeam() const { return team_; }
inline Position Player::getPosition() const { return position_; }
inline std::string Player::getName() const { return name_; }
inline int Player::getNumber() const { return number_; }

inline void Player::setField(Field* newField) { field_ = newField; }
inline void Player::setTeam(Team newTeam) { team_ = newTeam; }
inline void Player::setPosition(const Position& newPosition) { position_ = newPosition; }
inline void Player::setName(const std::string& newName) { name_ = newName; }
inline void Player::setNumber(int newNumber) { number_ = newNumber; }

#endif // PLAYER_HXX
