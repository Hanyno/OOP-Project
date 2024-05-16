#include "Player.h"

using namespace std;

Player::Player(string n, int num, Address* a, string r)
{
    this->name = n;
    this->playerNumber = num;
    this->address = a;
    this->role = r;
}

Player::~Player()
{
}

string Player::getName()
{
    return this->name;
}

string Player::getRole()
{
    return this->role;
}

int Player::getPlayerNumber()
{
    return this->playerNumber;
}