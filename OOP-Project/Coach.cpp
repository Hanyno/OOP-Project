#include "Coach.h"

Coach::Coach(string n, string s, Address* a)
{
	this->name = n;
	this->strategy = s;
	this->address = a;
}

Coach::~Coach()
{
}

string Coach::getName()
{
	return this->name;
}

string Coach::getRole()
{
	return "Coach";
}

string Coach::getStrategy()
{
	return this->strategy;
}