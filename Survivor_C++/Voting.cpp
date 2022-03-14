// TO FILL UP

#include "Voting.h"

using namespace std;

vector<Vote> Voting::votes;
map <string, int> Voting::results;


//Συνάρτηση που βρίσκει εάν ένας παίκτης είναι στην Ομάδα ή όχι
bool isMyCrushHere(string crush,string strongest1, Team &team)
{
    int i;
    for (i=0; i<10; i++)
    {
        if (crush == team.getPlayers()[i].getName() && crush!=strongest1)
        {
            return true;
        }
    }
    return false;
}

//Συνάρτηση υπεύθυνη για την διαδικασία Δημιοργίας Ψήφου του Παίκτη
//Επιστρέφει Αντικείμενο τύπου Vote

Vote playerVotes(string name, string weakest1, string weakest2,string strongest1, string strongest2, string strongest3, Team &team)
{
    if(name=="Spal")
    {
        //cout << "Spal is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Den mou kathetai");
            return v;
        }
        else
        {
            Vote v(weakest2, "Einai xalia");
            return v;
        }
    }
    if(name=="Bo")
    {
        //cout << "Bo is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Den akouei rap!");
            return v;
        }
        else
        {
            Vote v(weakest2, "Raparei kalutera apo emena");
            return v;
        }
    }
    if(name=="Laoura")
    {
        //cout << "Laoura is voting.."<<endl;
        if (name!=strongest2)
        {
            Vote v(strongest2, "Den exei kolo san ton diko mou");
            return v;
        }
        else
        {
            Vote v(strongest3, "Den exei kolo san ton diko mou");
            return v;
        }
    }
    if(name=="Choutos")
    {
        //cout << "Choutos is voting.."<<endl;
        if (name!=strongest2)
        {
            Vote v(strongest2, "Einai polu argos");
            return v;
        }
        else
        {
            Vote v(strongest3, "EEEEE den exo mualo na skefto");
            return v;
        }
    }
    if(name=="Chantavlakas")
    {
        //cout << "Chantavlakas is voting.."<<endl;
        if (name!=strongest2)
        {
            Vote v(strongest2, "gia to kalo tis omadas panta");
            return v;
        }
        else
        {
            Vote v(strongest3, "gia to kalo tis omadas panta");
            return v;
        }
    }
    if(name=="Kokkinakis")
    {
        //cout << "Kokkinakis is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Den voithaei sta athlimata");
            return v;
        }
        else
        {
            Vote v(weakest2, "Den tou aresan ta pitakia mou");
            return v;
        }
    }
    if(name=="Chraniolas")
    {
        //cout << "Chraniolas is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Einai adunamos");
            return v;
        }
        else
        {
            Vote v(weakest2, "Einai adunamos");
            return v;
        }
    }
    if(name=="Evridiki")
    {
        //cout << "Evridiki is voting.."<<endl;
        if(isMyCrushHere("Danos",strongest1, team))
        {
            Vote v("Danos", "Exei arxigikes taseis");
            return v;
        }
        else if (name!=strongest2 )
        {
            Vote v(strongest2, "Den ton sumpatho");
            return v;
        }
        else
        {
            Vote v(strongest3, "Den exoume dethei");
            return v;
        }
    }
    if(name=="Eirini (Pap)")
    {
        //cout << "Eirini (Pap) is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Einai fidi san ton xantavlaka");
            return v;
        }
        else
        {
            Vote v(weakest2, "Me prodose");
            return v;
        }
    }
    if(name=="Danos")
    {
        //cout << "Danos is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Einai axristos...");
            return v;
        }
        else
        {
            Vote v(weakest2, "Oti goustaro! Ante min ta paro tora!");
            return v;
        }
    }
    if (name == "Panaras")
    {
        //cout << "Panaras is voting.."<<endl;
        if(name!=strongest2)
        {
            Vote v(strongest2, "I don't know how to play a team sport...");
            return v;
        }
        else
        {
            Vote v(strongest3, "I don't know how to play a team sport...");
            return v;
        }
    }
    if (name == "Kostas(Merc)")
    {
        //cout << "Kostas(Merc) is voting.."<<endl;
        if (isMyCrushHere("Panaras",strongest1, team))
        {
            Vote v("Panaras", "He is bold and I hate rugby..");
            return v;
        }
        else if (name!=weakest1)
        {
            Vote v(weakest1, "Ya, I can work  within a team.");
            return v;
        }
        else
        {
            Vote v(weakest2, "Ya, I can work  within a team.");
            return v;
        }
    }

    if (name == "Elissavet")
    {
        //cout << "Elissavet is voting.."<<endl;
        if (isMyCrushHere("Tsangk",strongest1, team))
        {
            Vote v("Tsangk", "Call me a racist, idc, he pisses me off");
            return v;
        }
        else if (name!=weakest1)
        {
            Vote v(weakest1, "One for the team!");
            return v;
        }
        else
        {
            Vote v(weakest2, "Ya, I can work  within a team.");
            return v;
        }
    }
    if (name == "Konstantinos(Modelo)")
    {
        //cout << "Konstantinos(Modelo) is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "Talk about being a team player, you bitches ain't got shit on me!");
            return v;
        }

        else
        {
            Vote v(weakest2, "Talk about being a team player, you bitches ain't got shit on me!");
            return v;
        }
    }
    if (name == "Marios")
    {
        //cout << "Marios is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "That gay boy calls it right, I'll support my team!");
            return v;
        }
        else
        {
            Vote v(weakest2, "That gay boy calls it right, I'll support my team!");
            return v;
        }
    }
    if (name == "Tsangk")
    {
        //cout << "Tsangk is voting.."<<endl;
        if (isMyCrushHere("Elissavet",strongest1, team))
        {
            Vote v("Elissavet", "Γιατί έχουμε δύο..");
            return v;
        }
        else if (isMyCrushHere("Eirini (Ain)",strongest1, team))
        {
            Vote v("Eirini (Ain)", "Racist...Oust!");
            return v;
        }
        else if (name!=weakest1)
        {
            Vote v(weakest1, "Αφαιρετική μέθοδος...");
            return v;
        }
        else
        {
            Vote v(weakest2, "Αφαιρετική μέθοδος...");
            return v;
        }
    }
    if (name == "Willy")
    {
        //cout << "Willy is voting.."<<endl;
        if (name!=strongest2)
        {
            Vote v(strongest2, "Those pretty-face-fuckboys over there support the team.. \nWell, Willy's here to win it, I ain't doing any o' that, \nI am gonna get me some cashhhhh");
            return v;
        }
        else
        {
            Vote v(strongest3, "Those pretty-face-fuckboys over there support the team.. \nWell, Willy's here to win it, I ain't doing any o' that, \nI am gonna get me some cashhhhh");
            return v;
        }
    }
    if (name == "Sara")
    {
        //cout << "Sara is voting.."<<endl;
        if (name!=weakest1)
        {
            Vote v(weakest1, "I am gooood girl..(gnaaarl)");
            return v;
        }
        else
        {
            Vote v(weakest2, "I am gooood girl..(gnaaarl)");
            return v;
        }
    }
    if (name == "Eirini (Ain)")
    {
        //cout << "Eirini (Ain) is voting.."<<endl;
        if (isMyCrushHere("Tsangk", strongest1, team))
        {
            Vote v("Tsangk", "Don't you just love that descriminating Chinese piece-of-shit mothafuckin' dogshit Tsangk..? \n Ya he's cute!");
            return v;
        }
        else if (name!=weakest1)
        {
            Vote v(weakest1, "Go team Maxites! \n Now to eat so we can perform at the orgy! \n There is an orgy, right? I'll even do the gangbang by myself..");
            return v;
        }
        else
        {
            Vote v(weakest2, "Go team Maxites! \n Now to eat so we can perform at the orgy! \n There is an orgy, right? I'll even do the gangbang by myself..");
            return v;
        }
    }
//Ποιος στο καλό είναι αυτός τέλος πάντων;
    if (name == "Anergos")
    {
        //cout << "Anergos is voting.."<<endl;
        string voted;
        do
        {
            srand(time(NULL));
            int i = rand() % 10 ;
            voted = team.getPlayers()[i].getName();
        }
        // Έλεγχος για να σιγουρευτούμε ότι η rand() δεν 'δείχνει' σε μία έγκυρη θέση στον πίνακα
        //(στον ίδιο τον παίκτη, στον παίκτη με ασυλία ή σε άδεια θέση
        while ((name == voted) || (voted == strongest1) || (voted == ""));

        Vote v(voted, "We are Anonymous. \n We bring the One True Equilibrium. \n Fear us and don't stand in our way. \n -From the wall of a WoW clan, smh.");
        return v;
    }
}

//Συνάρτηση που 'επιστρέφει' τον πιο δυνατό και τον πιο αδύναμο παίκτη
void setWeakestAndStrongest(Team &team, string &weakest1, string &weakest2, string &strongest1, string &strongest2)
{
    int i;
    int mostPower1=0,mostPower2=0, leastPower1 = 100, leastPower2 = 100;
    for (i=0; i<10; i++){

// Έλεγχος μήπως αυτή η θέση στον πίνακα είναι κενή (έχει διαφραφή ο παίκτης)
//ή ο παίκτης έχει Ασυλία, οπότε δεν μπορεί να ψηφιστεί
        if(team.getPlayers()[i].getName() != "" || team.getPlayers()[i].getImmunity() == true)
        {
            //Για strongest
            //Εάν ο παίκτης έχει τη μεγαλύτερη Δύναμη, αποθηκεύουμε τη Δύναμη καθώς και το όνομά του
            if (team.getPlayers()[i].getPower()>mostPower1)

            {
                mostPower1 = team.getPlayers()[i].getPower();
                strongest1 = team.getPlayers()[i].getPower();
            }
            else if (team.getPlayers()[i].getPower()>mostPower2)
            {
                mostPower2 = team.getPlayers()[i].getPower();
                strongest2 = team.getPlayers()[i].getName();
            }
            //Ακολουθεί παρόμοια διαδικασία για weakest

            //Εάν ο παίκτης έχει τη μικρότερη Δύναμη, αποθηκεύουμε τη Δύναμη, καθώς και το όνομά του
            if (team.getPlayers()[i].getPower()<leastPower1)

            {
                leastPower1 = team.getPlayers()[i].getPower();
                weakest1 = team.getPlayers()[i].getName();
            }
            else if (team.getPlayers()[i].getPower()<leastPower2)
            {
                leastPower2 = team.getPlayers()[i].getPower();
                weakest2 = team.getPlayers()[i].getName();
            }

        }
    }

}



void Voting::votingProcess(Team &team)
{

    int i = 0;
    //Επιλέγουμε τον πιο αδύναμο κι τον πιο δυνατό παίκτη για τη διαδικασία επιλογής αργότερα
    string weakest1, weakest2;
    string strongest1, strongest2, strongest3;
    setWeakestAndStrongest(team, weakest1, weakest2, strongest1, strongest2);

    if(team.getNumberOfPlayers()==2)
    {

        cout << "Only 2 players left. \n";
        cout<<"Weakest1: "<<weakest1<<"   Weakest2: "<<weakest2<<endl;
        cout<<"Strongest1: "<<strongest1<<"   Strongest2: "<<strongest2<<"   Strongest3: "<<strongest3<<endl;
    }

    else
    {

        //Ψήφισαν όλοι οι παίκτες;

        for(; i<10; i++) //SOS to be explained why getNumberofPlayers wont work!!
        {
            //Τελείωσαν οι ψήφοι του παίκτη;
            for(int y = 0; team.getPlayers()[i].getVotes()>y; y++)
            {
                Vote v = playerVotes(team.getPlayers()[i].getName(), weakest1,weakest2, strongest1,strongest2,strongest3, team);
                Voting::votes.push_back(v);
            }
        }
        //Ψήφισαν όλοι οι παίκτες
        //Εκτύπωση περιεχομένων διανυσμάτος votes
        cout<<"Total votes in the team "<<team.getName()<<": "<<Voting::votes.size()<<endl;
        for (i=0; i<Voting::votes.size(); i++)
        {
            cout<<"Player voted: "<<Voting::votes[i].getVote()<<"\n";
            cout<<"Reason provided: "<<Voting::votes[i].getReason()<<"\n \n";
        }
        //cout<<"Start of vector to map."<<endl;
//Μετρήθηκαν όλες οι ψήφοι από το διάνυσμα;
        i=0;
        while (i<Voting::votes.size())
        {
//Υπάρχει το κλειδί στο results;
            string key = Voting::votes[i].getVote();
            map<string, int>::iterator p;
            p = Voting::results.find(key);
            if (p!=Voting::results.end())
            {
                p->second++;
            }
            else
            {
                Voting::results[key] = 1;
            }
            i++;
        }

        //Τώρα καταχωρήθηκαν όλες οι ψήφοι στον χάρτη results

//DIAFIMISEIS - SLEEP
        Sleep(1000);

        //Εκτυπωση Αποτελεσμάτων results
        //Ταυτόχρονα επιλέγουμε και τους 2 παίκτες με το μεγαλύτερο αριθμό ψήφων

        cout<<"The result of the voting process is: \n";
        //Βοηθητικές μεταβλητές
        int votes, most_voted1, most_voted2, most_votes1 = 0, most_votes2 = 0;
        string  key;
        map<string, int>::iterator p=results.begin();

        for (i = 0; i<10; i++) //SOS to be explained why getNumberofPlayers wont work!!
        {
            //Πέρασμα των ψήφων στο χάρτη και εκτύπωση
            key = team.getPlayers()[i].getName();
            if (key != "")
            {
                p = Voting::results.find(key);
                //Εάν υπάρχει το κλειδί στον χάρτη, κι άρα ο παίκτης έχει ψηφιστεί τουλάχιστον μία φορά, βάζουμε στο votes τις ψήφους
                //Αλλιώς βάζουμε votes = 0
                if ( p != Voting::results.end())
                {
                    votes = p->second;

                }
                else
                {
                    votes = 0;
                }

                cout<<"Player "<< key <<" has been voted " << votes <<" times.\n";


                //Επιλογή ταυτόχρανα και των δύο παικτών με τις περισσότερες ψήφους
                if (votes>most_votes1)
                {
                    most_votes1 = votes;
                    most_voted1 = i;
                }
                else if (votes>most_votes2)
                {
                    most_votes2 = votes;
                    most_voted2 = i;
                }
            }
        }
        //Αλλαγή της μεταβλητής τους Candidate σε True
//        team.getPlayers()[most_voted1].setCandidate(true);
//        team.getPlayers()[most_voted2].setCandidate(true);
        //Επιλογή και απομάκρυνση ενός εκ των δύο από την Ομάδα
//Απομακρύνεται εκείνος που ψηφίστηκε τις περισσότερες φορές
//Εάν έχουν ψηφίστει και οι δύο ίδια ποσοτικά, τυχαία επιλέγεται ένας
        string goodbye;

        if (most_votes1>most_votes2) //Απομακρύνεται εκείνος που ψηφίστηκε τις περισσότερες φορές
        {
            goodbye = team.getPlayers()[most_voted1].getName();
            //team.getPlayers()[most_voted2].setCandidate(false);
        }
        else if(most_votes1 == most_votes2) //Εάν έχουν ψηφίστει και οι δύο ίδια ποσοτικά, τυχαία επιλέγεται ένας
        {
            cout<<"The most voted players are: \n";
            cout<<team.getPlayers()[most_voted1].getName()<<"\n"<<team.getPlayers()[most_voted2].getName()<<"\n";
            srand(time(NULL));
            int goodbye_who = rand() % 2;
            switch (goodbye_who)
            {
            case 0:
                goodbye = team.getPlayers()[most_voted1].getName();
                //team.getPlayers()[most_voted2].setCandidate(false);
                break;
            case 1:
                goodbye = team.getPlayers()[most_voted2].getName();
                //team.getPlayers()[most_voted1].setCandidate(false);
                break;
            }
        }
        cout<<goodbye<<" is leaving Survivor\n";
        Voting::results.clear();
        Voting::votes.clear();
        team.removePlayer(goodbye);
    }
//END
}
