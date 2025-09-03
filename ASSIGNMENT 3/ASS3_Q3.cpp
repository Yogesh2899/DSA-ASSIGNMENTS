#include <iostream>
#include <stack>
using namespace std;

bool isMatching(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isBalanced(string st)
{
    stack<char> s;
    for (char ch : st)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (s.empty() || !isMatching(s.top(), ch))
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    string st;
    cout << "Enter a string: ";
    cin >> st;

    if (isBalanced(st))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}