#include <iostream>
using namespace std;
vector<vector<int>> generateMatrix(int n)
{
    int size = n * n;
    vector<vector<int>> ans(n, vector<int>(n));
    int startingrow = 0;
    int endingrow = n - 1;
    int startingcol = 0;
    int endingcol = n - 1;
    int num = 1;

    while (num <= size)
    {
        // print starting row
        for (int index = startingcol; index <= endingcol && num <= size; index++)
        {
            ans[startingrow][index] = num++;
        }

        startingrow++;

        // now printing the ending column
        for (int index = startingrow; index <= endingrow && num <= size; index++)
        {
            ans[index][endingcol] = num++;
        }

        endingcol--;

        // printing ending row
        for (int index = endingcol; index >= startingcol && num <= size; index--)
        {
            ans[endingrow][index] = num++;
        }
        endingrow--;

        // printing starting col
        for (int index = endingrow; index >= startingrow && num <= size; index--)
        {
            ans[index][startingcol] = num++;
        }
        startingcol++;
    }

    return ans;
}

int main()
{
    int n = 3;

    vector<vector<int>> matrix = generateMatrix(n);

    cout << "Spiral Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}