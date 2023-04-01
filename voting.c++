#include <iostream>
using namespace std;
void Login(Election_Administrator admins, int& count_admins);
void SignUp(Elector electors, int& count_electors);
void CreateElection(Election  elections, int& count_elections, Election_Administrator admin);
void EditElection(Election  elections, int count_elections, Election_Administrator admin);
void ShowElectionList(Election  elections, int count_elections);
bool CheckEligibility(Election  elections, int count_elections, Elector elector);
void Vote(Election  elections, int count_elections, Elector elector);
void EndElection(Election  elections, int count_elections, Election_Administrator admin);
void ShowElectionResults(Election  elections, int count_elections, Elector elector);

struct Election {
string name;
string description;
string nominees[5];
string allowed_voters_code[8];
bool finished_flag;
};

struct Elector {
string name;
string voter_code;
};

struct Election_Administrator {
string username;
string password;
};

int main(){
Election elections[5];
Elector electors[8];
Election_Administrator admins[3];






}


void Login(Election_Administrator  admins, int& count_admins);
void SignUp(Elector  electors, int& count_electors);
void CreateElection(Election  elections, int& count_elections, Election_Administrator admin);
void EditElection(Election  elections, int count_elections, Election_Administrator admin);
void ShowElectionList(Election  elections, int count_elections);
bool CheckEligibility(Election  elections, int count_elections, Elector elector);
void Vote(Election  elections, int count_elections, Elector elector);
void EndElection(Election  elections, int count_elections, Election_Administrator admin);
void ShowElectionResults(Election  elections, int count_elections, Elector elector);