#pragma once

#include "Player.h"
#include "Coach.h"

#include <vector>
#include <string>

using namespace std;

class Team
{
private:
	string teamName;
	Coach* coach;
	vector<Player*> players;

public:
	Team(string n, Coach* c);

	string getTeamName();

	void addPlayer(Player* p);
	void printTeamInfo();
};

