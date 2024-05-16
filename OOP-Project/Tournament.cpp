#include "Tournament.h"

#include <iostream>

Tournament::Tournament(string n)
{
	this->name = n;
}

void Tournament::addMatch(Match* m) 
{
	this->matches.push_back(m);
}

void Tournament::printTournamentInfo()
{
	cout << "Tournament:\t" << this->name << endl;
	cout << "Matches:" << endl;
	for (int i = 0; i < this->matches.size(); i++)
	{
		cout << i + 1 << ".\t" << this->matches[i]->getHomeTeam() << "\tvs\t" << this->matches[i]->getAwayTeam() << endl;
	}
	cout << endl;
}