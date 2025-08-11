#include <iostream>
using namespace std;
void reverse(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    int len = count;
    for (int j = 0; j < len / 2; j++)
    {
        char temp = name[j];
        name[j] = name[len - j - 1];
        name[len - j - 1] = temp;
    }
    for (int j = 0; j < len; j++)
    {
        cout << name[j];
    }
}
int main()
{
    char name[] = "Yogesh";
    reverse(name);
}