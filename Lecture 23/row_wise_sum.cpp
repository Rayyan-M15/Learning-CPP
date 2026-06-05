#include <iostream>
using namespace std;

void rowsum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        cout << "Sum of row " << i + 1 << " is " << sum << endl;
    }

}

int main()
{
    int arr[3][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }

    rowsum(arr, 3, 4);
    return 0;
}