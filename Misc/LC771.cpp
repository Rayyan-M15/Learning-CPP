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

int numJewelsInStones(string jewels, string stones)
{
    int ans = 0;

    for (int i = 0; i < stones.size(); i++)
    {
        for (int j = 0; j < jewels.size(); j++)
        {
            if (jewels[j] == stones[i])
            {
                ans++;
            }
        }
    }

    return ans;
}

int main()
{
    string jewels, stones;

    cin >> jewels;
    cin >> stones;

    cout << numJewelsInStones(jewels, stones);

    return 0;
}