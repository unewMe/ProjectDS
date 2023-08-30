#include "SignOut.h"
#include <iostream>
#include "../main.h"

using namespace std;

bool SignOut::signout(){
    string name,surname,sex,email,username,password,rPassword;
    int day,month,year;
    cout<<"Imie: ";
    cin>>name;
    cout<<"\nNazwisko: ";
    cin>>surname;
    cout<<"\nPlec: ";
    do{
        cin>>sex;
    }
    while(!isSexCorrect(sex));

    cout<<"\nEmail: ";
    do{
        cin>>email;
    }
    while(!isEmailCorrect(email));

    cout<<"Data urodzenia:";
    do{
        cout<<"\nDzien: ";
        cin>>day;
        cout<<"\nMiesiac: ";
        cin>>month;
        cout<<"\nRok: ";
        cin>>year;
    }
    while(!isDataCorrect(day,month,year));

    cout<<"\nNazwa uzytkownika: ";
    cin>>username;
    cout<<"\nHaslo: ";
    cin>>password;
    cout<<"\nPowtorz haslo: ";
    do{
        cin>>rPassword;
    }
    while(isCorrectRPassword(password,rPassword));








}

