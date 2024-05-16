#pragma once

#include "Match.h"

#include <vector>
#include <string>

using namespace std;

class Tournament
{
private:
	string name;
	vector<Match*> matches;

public:
	Tournament(string n);

	void addMatch(Match* m);
	void printTournamentInfo();
};