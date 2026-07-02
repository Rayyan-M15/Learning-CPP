#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

    if (strs.empty())
        return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        while (strs[i].find(prefix) != 0)
        {
            prefix.pop_back();

            if (prefix.empty())
            {
                return "";
            }
        }
    }

    return prefix;
}

int main()
{
    int n;
    cin >> n;

    vector<string> strs(n);

    for(int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    cout << longestCommonPrefix(strs) << endl;

    return 0;
}