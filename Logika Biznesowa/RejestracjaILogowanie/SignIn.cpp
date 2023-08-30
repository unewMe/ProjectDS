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
bool Logowanie::isPasswordCorrect(std::string password,vector<User> people)
{
    for(int i=0;i<people.size();i++)
    {
        if(people[i].getPassword()==password)
            return true;
    }
    return false;
}
bool Logowanie::singIn(std::string username, std::string password,vector<User> people)
{
    bool wantsToRegister=false;
    do
    {
        string inputUsername;
        cout<<"Podaj login: ";
        cin>>inputUsername;

    } while (!isUsernameCorrect(username,people) && !wantsToRegister);
    return true;

}