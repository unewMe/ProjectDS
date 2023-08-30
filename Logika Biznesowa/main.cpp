#include "WirtualneByty/User.h"
#include "WirtualneByty/Person.h"
#include "SerializacjaUzytkownikow/WriteAndReadFromFile.h"
#include <vector>
#include"RejestracjaILogowanie/SignIn.h"
#include"main.h"
#include"StrukturyDanych/BST.h"
#include"StrukturyDanych/IntegerComparator.h"
using namespace std;
int main()
{
    string imie="Dawid";
    string nazwisko="Chudzicki";
    string mail="dada";
    string username="Dav";
    string password="123";
    User user(imie,nazwisko,mail,12,12,12,username,password);
    WriteAndReadFromFile *writeAndReadFromFile = new WriteAndReadFromFile();
    vector<User> users;
    users.push_back(user);
    writeAndReadFromFile->WriteIntoFile(users);
    vector<User> users2=writeAndReadFromFile->ReadFromFile();
    Logowanie::singIn(users2);
    IntegerComparator integerComparator;
    BST<int>* bst = new BST(integerComparator);
    bst->add(5);
}

