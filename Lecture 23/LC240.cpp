#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowindex = 0;
    int colindex = col - 1;

    while (rowindex < row && colindex >= 0)
    {
        int element = matrix[rowindex][colindex];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            rowindex++;
        }

        else
        {
            colindex--;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int target = 14;

    if(searchMatrix(matrix, target))
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}