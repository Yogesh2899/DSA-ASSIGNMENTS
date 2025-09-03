#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {73, 74, 75, 71, 69, 72, 76, 73};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> next(n, 0);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            next[i] = s.top() - i;
        }

        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << next[i] << " ";
    }
}