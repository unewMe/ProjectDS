//
// Created by piotr on 30.08.2023.
//

#include "Register.h"
#include <iostream>
#include "../main.h"
#include "../WirtualneByty/User.h"
#include <regex>

using namespace std;

bool Register::isEmailCorrect(const string &email){
    const regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4})");

    return regex_match(email, pattern);
}
bool Register::isDataCorrect(int day, int month, int year) {
    if(0<=year){
        if(0<month<=12){
            if(0<day<=31){
                return true;
            }
        }
    }
    return false;
}
bool Register::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool Register::isDateCorrect(int day, int month, int year) {
    if (year < 0) {
        return false;
    }
    if (month < 1 || month > 12) {
        return false;
    }

    int daysInMonth = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else if (month == 2) {
        daysInMonth = isLeapYear(year) ? 29 : 28;
    }

    if (day < 1 || day > daysInMonth) {
        return false;
    }

    return true;
}
bool Register::isUsernameExist(string username, vector<User> users) {
    string pUsername;
    for(unsigned int i=0;i<users.size();i++) {
        pUsername = users[i].getUsername();
        if (pUsername.length() != username.length())
            continue;
        unsigned int j = 0;
        while (j < pUsername.length()) {
            if (username[j] != pUsername[j])
                break;
            j++;
            if (j == username.length())
                return true;
        }
    }
    return false;
}
bool Register::isCorrectRPassword(std::string password, std::string rPassword) {
    if(password.length()!=rPassword.length())
        return false;

    for(unsigned int i=0;i<password.length();i++){
        if(password[i]!=rPassword[i])
            return false;
    }

    return true;
}
bool Register::register1() {
    string name, surname, sex, email, username, password, rPassword;
    int day, month, year;
    cout << "Imie: ";
    cin >> name;
    cout << "\nNazwisko: ";
    cin >> surname;
    cout << "\nPlec: ";
    do {
        cin >> sex;
    } while (!isSexCorrect(sex));

    cout << "\nEmail: ";
    do {
        cin >> email;
    } while (!isEmailCorrect(email));

    cout << "Data urodzenia:";
    do {
        cout << "\nDzien: ";
        cin >> day;
        cout << "\nMiesiac: ";
        cin >> month;
        cout << "\nRok: ";
        cin >> year;
    } while (!isDateCorrect(day, month, year) or cin.fail());

    cout << "\nNazwa uzytkownika: ";
    do {
        cin >> username;
    } while (!isUsernameExist(username, people));
    cout << "\nHaslo: ";
    cin >> password;
    cout << "\nPowtorz haslo: ";
    do {
        cin >> rPassword;
    } while (isCorrectRPassword(password, rPassword));

    User newUser(name, surname, email, day, month, year, username, password);

    people.push_back(newUser);

    cout<<"Pomyslnie zajestrowano uzytkownika"<<endl;

    return true;

}