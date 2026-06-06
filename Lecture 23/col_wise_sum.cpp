#include <iostream>
using namespace std;

void colsum(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;

        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }

        cout << "Sum of col " << j + 1 << " is " << sum << endl;
    }
}

int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    colsum(arr, 3, 4);
    return 0;
}