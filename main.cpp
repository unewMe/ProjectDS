#include <iostream>
#include "Logika Biznesowa/WirtualneByty/User.h"
#include "Logika Biznesowa/WirtualneByty/Person.h"
#include "Logika Biznesowa/SerializacjaUzytkownikow/WriteAndReadFromFile.h"
#include <string.h>
using namespace std;
int main()
{
    string imie="Dawid";
    string nazwisko="Chudzicki";
    string mail="dada";
    string username="Dav";
    string password="123";
    User *user = new User(imie,nazwisko,mail,12,12,12,username,password);
    WriteAndReadFromFile *writeAndReadFromFile = new WriteAndReadFromFile();
    writeAndReadFromFile->WriteIntoFile(user);
    user=writeAndReadFromFile->ReadFromFile();
}

