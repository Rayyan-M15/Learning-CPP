#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int SR = 0;
    int ER = matrix.size() - 1; // 2
    int SC = 0;
    int EC = matrix[0].size() - 1; // 3
    while (SR <= ER)
    {
        int MidRow = (SR + ER) / 2;
        if (matrix[MidRow][SC] <= target && target <= matrix[MidRow][EC])
        {
            while (SC <= EC)
            {
                int midcol = (SC + EC) / 2;
                if (matrix[MidRow][midcol] < target)
                {
                    SC = midcol + 1;
                }
                else if (target < matrix[MidRow][midcol])
                {
                    EC = midcol - 1;
                }
                else if (target == matrix[MidRow][midcol])
                    return true;
            }
        }
        else if (target < matrix[MidRow][0])
        {
            ER = MidRow - 1;
        }
        else if (matrix[MidRow][EC] < target)
        {
            SR = MidRow + 1;
        }
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