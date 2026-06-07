/*For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order,
i.e., print the first column top to bottom, next column bottom to top, and so on.

For eg:-
The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {

        if (col % 2 == 0)
        {
            // even index: top to bottom

            for (int rows = 0; rows < nRows; rows++)
            {
                ans.push_back(arr[rows][col]);
            }
        }
        else
        {
            for (int rows = nRows - 1; rows >= 0; rows--)
            {
                ans.push_back(arr[rows][col]);
            }
        }
    }

    return ans;
}
int main()
{
    int nRows = 3;
    int mCols = 4;

    vector<vector<int>> arr(nRows, vector<int>(mCols));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "Wave Print: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}