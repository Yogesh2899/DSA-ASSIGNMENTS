#include <iostream>
#include <stack>
using namespace std;

class SpecialStack
{
    stack<int> mainStack;
    stack<int> minStack;

public:
    void push(int x)
    {
        mainStack.push(x);

        if (minStack.empty() || x <= minStack.top())
            minStack.push(x);
        else
            minStack.push(minStack.top());
    }

    void pop()
    {
        if (!mainStack.empty())
        {
            mainStack.pop();
            minStack.pop();
        }
    }

    int peek()
    {
        if (!mainStack.empty())
            return mainStack.top();
        return -1;
    }

    int getMin()
    {
        if (!minStack.empty())
            return minStack.top();
        return -1;
    }

    bool empty()
    {
        return mainStack.empty();
    }
};

int main()
{
    SpecialStack s;
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);

    cout << "Current Min: " << s.getMin() << endl;
    s.pop();
    cout << "Current Min: " << s.getMin() << endl;
    s.pop();
    cout << "Top Element: " << s.peek() << endl;
    cout << "Current Min: " << s.getMin() << endl;

    return 0;
}
