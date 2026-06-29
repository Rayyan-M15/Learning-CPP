#include <iostream>
using namespace std;

int strStr(string haystack, string needle)
{

    if (needle.size() > haystack.size())
    {
        return -1;
    }

    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
        int j = 0;
        while (j < needle.size() && haystack[i + j] == needle[j])
        {
            j++;
        }

        if (j == needle.size())
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string haystack, needle;

    cin >> haystack >> needle;

    cout << strStr(haystack, needle) << endl;

    return 0;
}