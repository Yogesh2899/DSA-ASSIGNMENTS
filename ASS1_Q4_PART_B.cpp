#include <iostream>
using namespace std;

void multi(int arr[][3], int brr[][4], int n, int m, int o, int p)
{
    if (m == o)
    {
        int crr[n][p];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum += arr[i][k] * brr[k][j];
                }
                crr[i][j] = sum;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cout << crr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "matrix multiplication not possible" << endl;
    }
}
int main()
{
    int arr[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int brr[3][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};

    multi(arr, brr, 3, 3, 3, 4);
}