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

int lengthOfLastWord(string s)
{
    int i = s.size() - 1;

    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    int ans = 0;
    while (i >= 0 && s[i] != ' ')
    {
        i--;
        ans++;
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    cout << lengthOfLastWord(s) << endl;

    return 0;
}