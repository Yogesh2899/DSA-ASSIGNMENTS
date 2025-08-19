#include <iostream>
using namespace std;

void upperTri(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                cout << arr[k] << " ";
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
    int upperElements[size];
    cout << "Enter " << size << " upper elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> upperElements[i];
    }

    upperTri(upperElements, n);

    return 0;
}