#include <iostream>
#include <string>
using namespace std;

void concatenate(string firstname, string lastname)
{
    string fullName = firstname + " " + lastname;
    cout << "Full Name: " << fullName << endl;
}

int main()
{
    string firstname = "Yogesh";
    string lastname = "Goyal";

    concatenate(firstname, lastname);
}
