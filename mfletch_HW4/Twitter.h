//
// Created by marli on 4/9/2025.
//

#ifndef TWITTER_H
#define TWITTER_H
#include "SocialMediaAccount.h"


template<class T>
class Twitter : public SocialMediaAccount<T> {
    public:
    Twitter(T handler):SocialMediaAccount<T>(handler){}
    int getRetweetCount()const {return retweetCount;}
    void setRetweetCount(int retweetCount){this->retweetCount = retweetCount;}

    void RT() {
        retweetCount++;
    }

    private:
    int retweetCount=0;



};



#endif //TWITTER_H
