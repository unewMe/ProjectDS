//
// Created by chudz on 29.08.2023.
//
#include <string>
#ifndef OSOBA_H
#define OSOBA_H
using namespace std;
class Osoba
{
protected:
    struct dataUrodzenia
    {
        int dzien;
        int miesiac;
        int rok;
    };

    string imie;
    string nazwisko;
    string mail;
    dataUrodzenia dataUrodzenia;
};

#endif //PROJECTDS_OSOBA_H
