#include "Team.h"

#include <iostream>

using namespace std;

Team::Team(string n, Coach* c)
{
	this->teamName = n;
	this->coach = c;
}

string Team::getTeamName()
{
	return this->teamName;
}

void Team::addPlayer(Player* p)
{
	this->players.push_back(p);
}

void Team::printTeamInfo()
{
	cout << "Team name:\t" << this->teamName << endl;
	cout << "Coach: \t\t" << this->coach->getName() << endl;
	cout << "Players:" << endl;
	for (int i = 0; i < this->players.size(); i++)
	{
		cout << "\tName:\t" << this->players[i]->getName() << endl;
		cout << "\tRole:\t" << this->players[i]->getRole() << endl;
		cout << "\tNumber:\t" << this->players[i]->getPlayerNumber() << endl;
		cout << endl;
	}
	cout << endl;
}