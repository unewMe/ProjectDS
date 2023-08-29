#include<string>
#include "Person.h"
#include "User.h"
using namespace std;
User::User(string &imie, string &nazwisko, string &mail, int dzien, int miesiac, int rok, std::string &username,
           std::string &password) : Person(imie, nazwisko, mail, dzien, miesiac, rok) {
    this->username=username;
    this->password=password;
}
