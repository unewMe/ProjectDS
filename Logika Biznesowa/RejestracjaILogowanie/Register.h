//
// Created by piotr on 30.08.2023.
//

#ifndef PROJECTDS_REGISTER_H
#define PROJECTDS_REGISTER_H

#include "../WirtualneByty/User.h"
#include <string>
#include <vector>

class Register {
public:
    bool register1();
    bool isEmailCorrect(const string &email);
    bool isSexCorrect(string sex);
    bool isDateCorrect(int day, int month, int year);
    bool isCorrectRPassword(string password,string rPassword);
    bool isUsernameExist(string username,vector<User>users);
    bool isLeapYear(int year);

};


#endif //PROJECTDS_REGISTER_H
