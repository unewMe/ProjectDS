#include<string>
#include"Person.h"
using namespace std;

Person::Person(string &imie,string &nazwisko,string &mail,int dzien,int miesiac,int rok)
{
    this->imie=imie;
    this->nazwisko=nazwisko;
    this->mail=mail;
    dataUrodzenia dataUrodzenia41(dzien,miesiac,rok);
    this->dataUrodzenia1=dataUrodzenia41;
};
