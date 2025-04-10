//
// Created by marli on 4/9/2025.
//

#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include "SocialMediaAccount.h"


template<class T>
class Instagram : public SocialMediaAccount<T>{
public:
    Instagram(T handler):SocialMediaAccount<T>(handler){}
    int getLikeCount()const {return likeCount;}
    void setLikeCount(int likeCount){this->likeCount = likeCount;}

    void Like() {
        likeCount++;
    }

private:
    int likeCount=0;
};



#endif //INSTAGRAM_H
