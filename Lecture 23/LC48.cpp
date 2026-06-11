#include <iostream>
#include<vector>
using namespace std;
//to rotate a n*n matrix by 90 degrees we follow two steps
//1. we transpose the matrix
//2. we reverse the transposed matrix
void rotate(vector<vector<int>> &matrix) //done inplace
{
    int row = matrix.size();
    int col = row;
    int n = row;

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}


int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";

    for(auto row : matrix)
    {
        for(auto element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    rotate(matrix);

    cout << "\nRotated Matrix:\n";

    for(auto row : matrix)
    {
        for(auto element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}