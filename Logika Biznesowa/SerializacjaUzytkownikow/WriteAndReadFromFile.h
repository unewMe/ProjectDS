//
// Created by chudz on 29.08.2023.
//
#ifndef PROJECTDS_WRITEANDREADFROMFILE_H
#define PROJECTDS_WRITEANDREADFROMFILE_H


#include "../WirtualneByty/User.h"
#include <vector>
class WriteAndReadFromFile
{
public:
    void WriteIntoFile(vector<User> users);
    vector<User> ReadFromFile();

};


#endif //PROJECTDS_WRITEANDREADFROMFILE_H
