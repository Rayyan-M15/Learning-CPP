// Spiral matrix problem
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    while (count < total)
    {
        // print starting row
        for (int index = startingcol; index <= endingcol && count < total; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }

        startingrow++;

        // now printing the ending column
        for (int index = startingrow; index <= endingrow && count < total; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }

        endingcol--;

        // printing ending row
        for (int index = endingcol; index >= startingcol && count < total; index--)
        {
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        // printing starting col
        for (int index = endingrow; index >= startingrow && count < total; index--)
        {
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";

    for (int num : result)
    {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}