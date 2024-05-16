#pragma once

#include "Team.h"
#include "Address.h"

#include <string>

using namespace std;

class Match
{
private:
	Team* homeTeam;
	Team* awayTeam;
	Address* location;

public:
	Match(Team* h, Team* a, Address* l);

	string getHomeTeam();
	string getAwayTeam();

	void printMatchInfo();
};

