#include<string>
#include"Osoba.h"
using namespace std;

class Osoba
{
private:
struct dataUrodzenia
{
    int dzien;
    int miesiac;
    int rok;
};
private:
    string imie;
    string nazwisko;
    string mail;
    dataUrodzenia dataUrodzenia;

};
