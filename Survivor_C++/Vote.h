#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED

// TO FILL UP

#include <iostream>
#include <string>

using namespace std;

class Vote{
    string voted;
    string reason;
public:
    Vote(){
        voted="";
        reason="";
        }
    Vote(string voted1,string reason1){
        voted=voted1;
        reason=reason1;
    }
    ~Vote(){
        cout << "\n";
    };
    //Getters
    string getVote(){return voted;}
    string getReason(){return reason;}
    //Setters
    void setVote(string voted1){voted = voted1;}
    void setReason(string reason1){reason=reason1;}
    //Συνάρτηση status που εκτυπωνει τις τμες όλων των μεταβλητών εκείνη την στιγμή
    void status(){
    cout << "Player voted is " << voted << endl;
    cout << "The reason is " << reason << endl;
    }
};

#endif // VOTE_H_INCLUDED
