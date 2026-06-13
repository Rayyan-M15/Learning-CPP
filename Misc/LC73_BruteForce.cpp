#include <iostream>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> row(rows, 0);
    vector<int> col(cols, 0);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    cout << "Original Matrix:\n";

    for (auto row : matrix)
    {
        for (auto x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    setZeroes(matrix);

    cout << "\nModified Matrix:\n";

    for (auto row : matrix)
    {
        for (auto x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}