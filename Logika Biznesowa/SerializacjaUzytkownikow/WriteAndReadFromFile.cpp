//
// Created by chudz on 29.08.2023.
//

#include "WriteAndReadFromFile.h"
#include <fstream>
#include <vector>
#include "../WirtualneByty/User.h"
#include<sstream>
void WriteAndReadFromFile::WriteIntoFile(vector<User> users)
{
    ofstream file("data.txt");
    //file.open("data.txt", std::ios::in | std::ios::out );
    if(!file.good())
    {

    }
    for(int i=0;i<users.size();i++)
    {
       file<<users[i].serialize()<<endl;
    }
    file.close();
}

vector<User> WriteAndReadFromFile::ReadFromFile()
{
    ifstream file("data.txt");
    vector<User> users;
    //file.open("data.txt",std::ios::in | std::ios::out );
    if(!file)
    {

    }
    string user;
    while(getline(file,user))
    {
        vector<string> data;
        istringstream iss(user);
        string singleData;
        while(iss>>singleData)
        {
            data.push_back(singleData);
        }
        users.push_back(User(data[0],data[1],data[2],stoi(data[3]),stoi(data[4]),stoi(data[5]),data[6],data[7]));
    }
    file.close();
    return users;
}