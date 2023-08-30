#include <iostream>
#include "WirtualneByty/User.h"
#include "WirtualneByty/Person.h"
#include "SerializacjaUzytkownikow/WriteAndReadFromFile.h"
#include <string.h>
#include <vector>
#include"main.h"
using namespace std;
int main()
{
    string imie="Dawid";
    string nazwisko="Chudzicki";
    string mail="dada";
    string username="Dav";
    string password="123";
    User user(imie,nazwisko,mail,12,12,12,username,password);
    WriteAndReadFromFile *writeAndReadFromFile = new WriteAndReadFromFile();
    vector<User> users;
    users.push_back(user);
    writeAndReadFromFile->WriteIntoFile(users);
    vector<User> users2=writeAndReadFromFile->ReadFromFile();
    people=users2;
}

