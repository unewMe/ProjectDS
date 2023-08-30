//
// Created by chudz on 29.08.2023.
//

#ifndef PROJECTDS_SIGNIN_H
#define PROJECTDS_SIGNIN_H
#include "../WirtualneByty/User.h"
#include<string>
#include "vector"
class Logowanie
{
public:
    bool isUsernameCorrect(string username,vector<User> people);
    bool isPasswordCorrect(string password,vector<User> people);
    bool singIn(string username,string password,vector<User> people);
private:
    User user;
};


#endif //PROJECTDS_SIGNIN_H
