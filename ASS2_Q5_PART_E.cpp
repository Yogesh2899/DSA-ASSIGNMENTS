#include <iostream>
using namespace std;

void symmetric(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                int index = (i * (i + 1)) / 2 + j;
                cout << arr[index] << " ";
            }
            else
            {
                int index = (j * (j + 1)) / 2 + i;
                cout << arr[index] << " ";
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

    symmetric(lowerElements, n);

    return 0;
}