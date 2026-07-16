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

vector<int> arrayRankTransform(vector<int> &arr)
{
    if (arr.empty())
        return {};

    vector<int> ans;
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    vector<int> rank(temp.size());
    rank[0] = 1;

    for (int i = 1; i < temp.size(); i++)
    {
        if (temp[i] == temp[i - 1])
            rank[i] = rank[i - 1];
        else
            rank[i] = rank[i - 1] + 1;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] == arr[i])
            {
                ans.push_back(rank[j]);
                break;
            }
        }
    }

    return ans;
}


int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = arrayRankTransform(arr);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}