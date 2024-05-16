#pragma once
#include "Person.h"
#include "Address.h"

#include <string>

using namespace std;

class Coach :
    public Person
{
private:
    string name;
    string strategy;
    Address* address;

public:
    Coach(string n, string s, Address* a);
    ~Coach();

    string getName() override;
    string getRole() override;
    string getStrategy();
};

