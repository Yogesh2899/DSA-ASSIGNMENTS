#include <iostream>
using namespace std;

void removeVowel(char name[])
{
    char temp[100];
    int j = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        char ch = name[i];

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            temp[j++] = ch;
        }
    }
    temp[j] = '\0';

    cout << "Without vowels: " << temp << endl;
}

int main()
{
    char name[] = "Yogesh Goyal";
    removeVowel(name);
}
