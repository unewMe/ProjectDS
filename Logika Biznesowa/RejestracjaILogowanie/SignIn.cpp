//
// Created by chudz on 29.08.2023.
//

#include "SignIn.h"
#include<string>
#include "../main.h"
#include "iostream"
using namespace std;
bool Logowanie::isUsernameCorrect(string username,vector<User> people)
{
    for(int i=0;i<people.size();i++)
    {
        if(people[i].getUsername()==username)
            return true;
    }
    return false;
}
bool Logowanie::isPasswordCorrect(string username,string password,vector<User> people)
{
    for(int i=0;i<people.size();i++)
    {
        if(people[i].getUsername()==username)
          if(people[i].getPassword()==password)
            return true;
    }
    return false;
}
bool Logowanie::singIn(vector<User> people)
{
    bool wantsToRegister=false;
    string inputUsername;
    string inputPassword;
    bool usernameExsist;
    bool passwordIsCorrect;
    bool incorrectLogin=false;
    do
    {
        cout<<"Podaj login: ";
        getline(cin,inputUsername);
        cout<<endl<<"Podaj haslo: ";
        getline(cin,inputPassword);
        usernameExsist= isUsernameCorrect(inputUsername,people);
        passwordIsCorrect = isPasswordCorrect(inputUsername,inputPassword,people);
        if(!usernameExsist || !passwordIsCorrect)
        {
            incorrectLogin=true;
        }
        else
        {
            incorrectLogin=false;
        }

        if(incorrectLogin)
        {
            cout<<"Podany uzytkownik nie istnieje sprobuj ponownie lub przejdz do rejstracji"<<endl;
            cout<<"Czy chcesz sie zarejstrowac?"<<endl;
            string temp;
            getline(cin,temp);
            if(temp=="Tak" || temp == "tak")
            {
                wantsToRegister=true;
            }
        }


    } while (incorrectLogin && !wantsToRegister);
    if(!incorrectLogin)
    {
        cout<<"Zalogowano pomyslne"<<endl;
    }
    if(wantsToRegister)
    {
        cout<<"Sekcja Rejstracja"<<endl;
    }
    return true;

}