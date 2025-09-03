#include <iostream>
#include <stack>

using namespace std;
void Reverse()
{
    stack<char> s;
    int size;
    cout << "enter size of string: " << endl;
    cin >> size;
    cout << "enter the string :" << endl;
    for (int i = 0; i < size; i++)
    {
        char ch;
        cin >> ch;

        s.push(ch);
    }
    cout << "Reversed string: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}
int main()
{
    Reverse();
    return 0;
}