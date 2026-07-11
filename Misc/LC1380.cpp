#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <numeric>
#include <cmath>
#include <climits>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        int minVal = matrix[i][0];
        int minCol = 0;

        bool isLucky = true;
        for (int j = 0; j < col; j++)
        {
            if (minVal > matrix[i][j])
            {
                minVal = matrix[i][j];
                minCol = j;
            }
        }

        for (int k = 0; k < row; k++)
        {
            if (matrix[k][minCol] > minVal)
            {
                isLucky = false;
                break;
            }
        }

        if (isLucky)
            ans.push_back(minVal);
    }

    return ans;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans = luckyNumbers(matrix);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}