//
// Created by piotr on 29.08.2023.
//

#ifndef PROJECTDS_SIGNOUT_H
#define PROJECTDS_SIGNOUT_H

#include "../WirtualneByty/User.h"
#include <string>
#include <vector>


class SignOut {
public:
    bool signout();
    bool isEmailCorrect(string email);
    bool isSexCorrect(string sex);
    bool isDataCorrect(int day, int month, int year);
    bool isCorrectRPassword(string password,string rPassword);
    bool isUsernameExist(string username,vector<User>users);


};


#endif //PROJECTDS_SIGNOUT_H
