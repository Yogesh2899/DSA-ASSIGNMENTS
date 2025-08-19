#include <iostream>
using namespace std;

void tridiagonal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << arr[i] << " ";
            else if (i == j + 1)
                cout << arr[n + j] << " ";
            else if (i + 1 == j)
                cout << arr[2 * n - 1 + i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int tridiagonalElements[3 * n - 2];

    cout << "enter" << 3 * n - 2 << "tridiagonal elements";

    for (int i = 0; i < 3 * n - 2; i++)
    {
        cin >> tridiagonalElements[i];
    }

    tridiagonal(tridiagonalElements, n);

    return 0;
}