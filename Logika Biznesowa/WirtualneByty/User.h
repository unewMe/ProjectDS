//
// Created by chudz on 29.08.2023.
//
#include<string>
#include "Person.h"
using namespace std;
#ifndef PROJECTDS_UZYTKOWNIK_H
#define PROJECTDS_UZYTKOWNIK_H
class User : private Person
{
public:
    User(string &imie, string &nazwisko, string &mail, int dzien, int miesiac, int rok, std::string &username,
         std::string &password);
private:
    string username;
    string password;
};
#endif //PROJECTDS_UZYTKOWNIK_H
