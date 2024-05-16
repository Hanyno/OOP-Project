#pragma once

#include <string>

using namespace std;

class Person
{
public:
	virtual ~Person() = 0;
	virtual string getName();
	virtual string getRole();
};

