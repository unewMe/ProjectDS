//
// Created by chudz on 29.08.2023.
//

#include "WriteAndReadFromFile.h"
#include <fstream>
void WriteAndReadFromFile::WriteIntoFile(User *user)
{
    fstream file;
    file.open("saved",ios::out|ios::binary);
    if(!file)
    {
        return;
    }
    file.write((char*)&user,sizeof(user));
    file.close();
}

User* WriteAndReadFromFile::ReadFromFile()
{
    fstream file;
    User *user;
    file.open("saved",ios::in|ios::binary);
    if(!file)
    {
        return NULL;
    }
    file.read((char*)&user,sizeof(user));
    file.close();
    return user;
}