#pragma once

#include <string>

#include "Person.h"
#include "Address.h"
class Player :
    public Person
{
private:
    string name;
    int playerNumber;
    Address* address;
    string role;

public:
    Player(string n, int num, Address* a, string r);
    ~Player();
    
    string getName() override;
    string getRole() override;
    int getPlayerNumber();
};

