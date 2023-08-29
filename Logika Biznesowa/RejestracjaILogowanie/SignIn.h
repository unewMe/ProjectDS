//
// Created by chudz on 29.08.2023.
//

#ifndef PROJECTDS_SIGNIN_H
#define PROJECTDS_SIGNIN_H
#include "../WirtualneByty/User.h"
#include<string>
class Logowanie
{
public:
    bool isUsernameCorrect(string username);
    bool isPasswordCorrect(string password);
    bool singIn(string username,string password);
private:
    User user;
};


#endif //PROJECTDS_SIGNIN_H
