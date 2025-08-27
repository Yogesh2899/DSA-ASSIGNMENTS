#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nearestSmallerToLeft(vector<int> &A)
{
    int n = A.size();
    vector<int> G(n, -1); // result array initialized with -1
    stack<int> st;        // stack to store elements

    for (int i = 0; i < n; i++)
    {
        // Pop all elements >= A[i]
        while (!st.empty() && st.top() >= A[i])
        {
            st.pop();
        }

        // If stack not empty, top is the nearest smaller
        if (!st.empty())
        {
            G[i] = st.top();
        }

        // Push current element
        st.push(A[i]);
    }
    return G;
}

int main()
{
    vector<int> A = {4, 5, 2, 10, 8};
    vector<int> G = nearestSmallerToLeft(A);

    cout << "Nearest smaller elements: ";
    for (int x : G)
        cout << x << " ";
    return 0;
}
