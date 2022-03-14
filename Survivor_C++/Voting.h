#ifndef VOTING_H_INCLUDED
#define VOTING_H_INCLUDED

// TO FILL UP

#include <iostream>
#include <vector>
#include <map>
#include "Vote.h"
#include "Team.h"
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

class Voting{
public:
    static vector<Vote> votes;
    static map<string,int> results;

     // Δεν υπάρχει ουσιαστική ανάγκη για constructors/destructors
     // δηλώνεται ρητά πως δεν θα υπάρξουν στιγμιότυπα αυτής της κλάσης
     Voting(){cout<<"No votes to be cast"<<endl;}
     ~Voting(){cout<<"Someone's gone, bye-bye"<<endl;}
     static void votingProcess(Team &team);
};

#endif // VOTING_H_INCLUDED
