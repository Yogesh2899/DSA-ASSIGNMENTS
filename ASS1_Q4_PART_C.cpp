#include <iostream>
using namespace std;

void transpose(int arr[5][4], int n, int m)
{
    int trans[4][5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[5][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4},
        {5, 5, 5, 5}};

    transpose(arr, 5, 4);
}
