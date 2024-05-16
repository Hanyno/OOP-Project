#include "Match.h"

#include <iostream>

using namespace std;

Match::Match(Team* h, Team* a, Address* l)
{
	this->homeTeam = h;
	this->awayTeam = a;
	this->location = l;
}

string Match::getHomeTeam() 
{
	return this->homeTeam->getTeamName();
}
string Match::getAwayTeam()
{
	return this->awayTeam->getTeamName();
}

void Match::printMatchInfo()
{
	cout << "Home team:" << endl;
	this->homeTeam->printTeamInfo();
	cout << endl;
	cout << "Away team:" << endl;
	this->awayTeam->printTeamInfo();
	cout << endl;
	this->location->printAddress();
	cout << endl;
}