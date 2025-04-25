/*************************************************************************
** Author : Marlie Fletcher
** Program : hw5
** Date Created : April 23, 2025
** Date Last Modified : April 24, 2025
** Usage : No command line arguments*/



#include <iostream>
#include <fstream>
#include <sstream>
#include "MYLIST.h"
using namespace std;

struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {if (fullname==rhs.fullname) return true; return false; }
    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false; }
};
ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"--" <<user.state;
    return out;
}

int main() {
    MyList<Profile> pMylist;
    string line;
    Profile temp;

    ifstream file("presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            pMylist.insertHead( temp);
        }
    }
    cout << "all profiles in the list: " << endl;
    pMylist.display();

    return 0;
}
