#include <iostream>
using namespace std;

void lowerTri(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << arr[i] << " ";
                k++;
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "enter size of square matrix";
    cin >> n;

    int size = n * (n + 1) / 2;
    int lowerElements[size];
    cout << "Enter " << size << " lower elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> lowerElements[i];
    }

    lowerTri(lowerElements, n);

    return 0;
}