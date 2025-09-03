#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

bool canTransform(vector<int> &A)
{
    int n = A.size();
    vector<int> target = A;
    sort(target.begin(), target.end());

    stack<int> S;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        S.push(A[i]);

        while (!S.empty() && S.top() == target[j])
        {
            S.pop();
            j++;
        }
    }

    return (S.empty() && j == n);
}

int main()
{
    vector<int> A = {2, 3, 1};

    if (canTransform(A))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
