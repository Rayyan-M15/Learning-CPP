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

vector<string> fizzBuzz(int n)
{
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            ans.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            ans.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            ans.push_back("Buzz");
        }
        else
        {
            ans.push_back(to_string(i));
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<string> ans = fizzBuzz(n);

    for(string s : ans)
    {
        cout << s << " ";
    }

    return 0;
}