#include "Tournament.h"
#include "Address.h"
#include "Player.h"
#include "Coach.h"
#include "Team.h"
#include "Match.h"

#include <iostream>

using namespace std;

int main()
{
    //vytvoøení objektù
    Address* addr1 = new Address(123, "Main St", "Springfield", "USA");
    Address* addr2 = new Address(456, "Elm St", "Shelbyville", "USA");
    Address* addr3 = new Address(1591, "Sptringfield Stadium", "Springfield", "USA");

    Player* p1 = new Player("John Doe", 7, addr1,"Libero");
    Player* p2 = new Player("Jane Smith", 12, addr2,"Setter");
    Player* p3 = new Player("Bob Johnson", 3, addr1, "Spiker");
    Player* p4 = new Player("Alice Brown", 8, addr2, "Blocker");

    Coach* c1 = new Coach("Dr. Brown", "Offensive", addr1);
    Coach* c2 = new Coach("Prof. Green", "Defensive", addr2);

    Team* t1 = new Team("Springfield Spikers", c1);
    Team* t2 = new Team("Shelbyville Servers", c2);
    //využití metody pro pøidání hráèe do týmu
    t1->addPlayer(p1);
    t1->addPlayer(p3);
    t2->addPlayer(p2);
    t2->addPlayer(p4);
    //vytvoøení objektù
    Match* m1 = new Match(t1, t2, addr3);

    Tournament* tournament = new Tournament("City Beach Championship");
    tournament->addMatch(m1);

    tournament->printTournamentInfo();

    t1->printTeamInfo();
    t2->printTeamInfo();

	return 0;
}