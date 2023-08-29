//
// Created by chudz on 29.08.2023.
//
#ifndef PROJECTDS_WRITEANDREADFROMFILE_H
#define PROJECTDS_WRITEANDREADFROMFILE_H


#include "../WirtualneByty/User.h"

class WriteAndReadFromFile
{
public:
    void WriteIntoFile(User *user);
    User* ReadFromFile();

};


#endif //PROJECTDS_WRITEANDREADFROMFILE_H
