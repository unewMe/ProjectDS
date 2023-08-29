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

string Person::serialize()
{
    string data;
    data.append(imie+" ");
    data.append(nazwisko+" ");
    data.append(mail+" ");
    data.append(to_string(dataUrodzenia1.dzien) + " " + to_string(dataUrodzenia1.miesiac) + " " + to_string(dataUrodzenia1.rok));

    return data;
}

string Person::getImie() {return imie;}