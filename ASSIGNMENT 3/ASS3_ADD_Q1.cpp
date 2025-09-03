#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 3, 4, 1};
    stack<int> s;

    for (int i = 0; i < 5; i++)
    {
        while (!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }

        if (s.empty())
            cout << 0 << " ";
        else
            cout << s.top() << " ";

        s.push(arr[i]);
    }

    return 0;
}
