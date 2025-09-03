#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5, 1, 8, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> next(n, -1);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }

        if (!s.empty())
        {
            next[i] = s.top();
        }

        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << next[i] << " ";
    }

    return 0;
}
