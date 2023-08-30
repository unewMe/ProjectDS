//
// Created by piotr on 29.08.2023.
//

#include "SignOut.h"
#include <iostream>
#include "../main.h"
#include "../WirtualneByty/User.h"

using namespace std;

bool SignOut::signout() {
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
    } while (!isDataCorrect(day, month, year));

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

    people.push_back(newUser)

    print()
}









}

