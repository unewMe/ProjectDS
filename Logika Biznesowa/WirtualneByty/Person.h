//
// Created by chudz on 29.08.2023.
//
#include <string>
#ifndef OSOBA_H
#define OSOBA_H
using namespace std;
struct dataUrodzenia
{
    int dzien;
    int miesiac;
    int rok;

    dataUrodzenia(){};
    dataUrodzenia(int dzien,int miesiac,int rok)
    {
        this->dzien=dzien;
        this->miesiac=miesiac;
        this->rok=rok;
    }
};
class Person
{
public:
    Person(){};
    Person(string &imie,string &nazwisko,string &mail,int dzien,int miesiac,int rok);
    string serialize();
    string getImie();

protected:
    string imie;
    string nazwisko;
    string mail;
    dataUrodzenia dataUrodzenia1;
};

#endif //PROJECTDS_OSOBA_H
