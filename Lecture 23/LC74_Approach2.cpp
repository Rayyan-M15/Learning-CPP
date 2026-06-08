#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int s = 0;
    int e = rows * cols - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        int element = matrix[mid / cols][mid % cols];

        if (element == target)
            return true;

        if (element < target)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};

    int target = 16;

    if (searchMatrix(matrix, target))
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}