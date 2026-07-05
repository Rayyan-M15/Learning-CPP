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

int maximumWealth(vector<vector<int>> &accounts)
{
    int row = accounts.size();
    int col = accounts[0].size();
    vector<int> ans;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += accounts[i][j];
        }

        ans.push_back(sum);
    }

    int max = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (max <= ans[i])
        {
            max = ans[i];
        }
    }
    return max;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> accounts(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> accounts[i][j];
        }
    }

    cout << maximumWealth(accounts) << endl;

    return 0;
}