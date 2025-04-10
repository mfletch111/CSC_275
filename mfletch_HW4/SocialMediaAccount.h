//
// Created by marli on 4/8/2025.
//

#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H
#include <iostream>
#include <ostream>

using namespace std;

//global members
const int maxFollowers = 10;
const int maxFollowed = 10;

//template T
template<class T>
class SocialMediaAccount {

public:
    SocialMediaAccount(T handler) : handler(handler), followerCount(0),
    followedCount(0), privacy(true)  {}; // constructor to initialize members

    //getter functions
    T getHandler(){return handler;};
    int getFollowerCount(){return followerCount;};
    int getFollowedCount(){return followedCount;};
    bool getPrivacy(){return privacy;};

    //setter functions
    void setHandler(T handler){this ->handler = handler;}
    void setFollowerCount(int followerCount){this ->followerCount = followerCount;}
    void setFollowedCount(int followedCount){this ->followedCount = followedCount;}
    void setPrivacy(bool privacy){this -> privacy = privacy;}

    void addFollower(T user) {
        if (followerCount < maxFollowers) {
            followers[followerCount] = user;
            followerCount++;
        }else {
            cout << "max followers exceeded" << endl;
        }
    }
    void addFollowed(T user) {
        if (followedCount < maxFollowed) {
            followed[followedCount] = user;
            followedCount++;
        }else {
            cout << "max followed exceeded" << endl;
        }
    }
    void displayFollowers() {
        if (privacy) {
            cout << "Account is protected. Cannot view information" << endl;
        } else {
            for (int i = 0; i < followerCount; i++) {
                cout << handler<<" 's followers: " << followers[i] << endl;
            }
        }
    }
    void displayFollowed() {
        if (privacy) {
            cout << "Account is protected. Cannot view information" << endl;
        } else {
            for (int i = 0; i < followedCount; i++) {
                cout << handler << " is following: " << followed[i] << endl;

            }
        }
    }
private:
    T handler;
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount;
    int followedCount;
    bool privacy;

};



#endif //SOCIALMEDIAACCOUNT_H
