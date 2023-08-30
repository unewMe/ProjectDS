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
    static bool isUsernameCorrect(string username, vector<User> people);
    static bool isPasswordCorrect(string username, string password, vector<User> people);
    static bool singIn(vector<User> people);
private:
    User user;
};


#endif //PROJECTDS_SIGNIN_H
