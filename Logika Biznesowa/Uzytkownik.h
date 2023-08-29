//
// Created by chudz on 29.08.2023.
//
#include<string>
#include "Osoba.h"
using namespace std;
#ifndef PROJECTDS_UZYTKOWNIK_H
#define PROJECTDS_UZYTKOWNIK_H
class Uzytkownik : private Osoba
{
private:
    string username;
    string password;
};
#endif //PROJECTDS_UZYTKOWNIK_H
