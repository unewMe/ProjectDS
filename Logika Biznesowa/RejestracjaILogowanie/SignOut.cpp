/*#include "signout.h"
#include <iostream>
#include "../main.h"

using namespace std;

bool signout::signout(){
    string name,surname,sex,email,username,password,rpassword;
    int day,month,year;
    cout<<"imie: ";
    cin>>name;
    cout<<"\nnazwisko: ";
    cin>>surname;
    cout<<"\nplec: ";
    do{
        cin>>sex;
    }
    while(!issexcorrect(sex));

    cout<<"\nemail: ";
    do{
        cin>>email;
    }
    while(!isemailcorrect(email));

    cout<<"data urodzenia:";
    do{
        cout<<"\ndzien: ";
        cin>>day;
        cout<<"\nmiesiac: ";
        cin>>month;
        cout<<"\nrok: ";
        cin>>year;
    }
    while(!isdatacorrect(day,month,year));

    cout<<"\nnazwa uzytkownika: ";
    cin>>username;
    cout<<"\nhaslo: ";
    cin>>password;
    cout<<"\npowtorz haslo: ";
    do{
        cin>>rpassword;
    }
    while(iscorrectrpassword(password,rpassword));
*/




