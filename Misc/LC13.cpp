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
int value(char ch)
{
    if (ch == 'I')
    {
        return 1;
    }
    else if (ch == 'V')
    {
        return 5;
    }
    else if (ch == 'X')
    {
        return 10;
    }
    else if (ch == 'L')
    {
        return 50;
    }
    else if (ch == 'C')
    {
        return 100;
    }
    else if (ch == 'D')
    {
        return 500;
    }

    return 1000;
}

int romanToInt(string s)
{
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int current = value(s[i]);

        if (i < s.size() - 1)
        {
            int next = value(s[i + 1]);

            if (current < next)
            {
                ans -= current;
            }
            else
            {
                ans += current;
            }
        }
        else
        {
            ans += current;
        }
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << romanToInt(s);

    return 0;
}