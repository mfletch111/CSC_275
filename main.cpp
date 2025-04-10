#include <iostream>
using namespace std;
#include "SocialMediaAccount.h"
#include "Twitter.h"
#include "Instagram.h"

int main() {
    struct Profile {
        int userId;
        string username;
    };

    Twitter<string> TS("tswift");
    TS.setPrivacy(false);
    TS.addFollower("drake");
    TS.addFollowed("drake");
    TS.RT();
    TS.displayFollowers();
    TS.displayFollowed();
    cout << "retweets" << TS.getRetweetCount()<<endl;
    cout << endl;


    Profile p1{1,"harryStyles"};
    Profile p2{2,"roleModel"};
    Twitter<Profile> TP(p1);
    TP.setPrivacy(false);
    TP.addFollower(p2);
    TP.addFollowed(p2);
    TP.RT();
    TP.RT();
    TP.displayFollowers();
    TP.displayFollowed();
    cout<< "retweets: " << TP.getRetweetCount() << endl;
    cout << endl;

    Instagram<string> IS("beyonce");
    IS.setPrivacy(false);
    IS.addFollower("rihanna");
    IS.addFollower("Jay-Z");
    IS.addFollowed("rihanna");
    IS.addFollowed("Jay-Z");
    IS.displayFollowers();
    IS.displayFollowed();
    IS.Like();
    IS.Like();
    IS.Like();
    cout<< "Likes: " << IS.getLikeCount() << endl;
    cout << endl;

    Profile p3{3,"niallHoran"};
    Profile p4{4,"zaynMalik"};
    Instagram<Profile> IP(p3);
    IP.setPrivacy(false);
    IP.addFollower(p4);
    IP.addFollowed(p4);
    IP.displayFollowers();
    IP.displayFollowed();
    IP.Like();
    IP.Like();
    IP.Like();
    IP.Like();
    IP.Like();
    cout<< "Likes: " << IP.getLikeCount() << endl;

    return 0;

}