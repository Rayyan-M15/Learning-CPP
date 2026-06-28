#include <iostream>
using namespace std;

bool isAnagram(string s, string t)
{
    int size_s = s.size();
    int size_t = t.size();

    if (size_s != size_t)
    {
        return 0;
    }

    int freq_s[26] = {0};
    int freq_t[26] = {0};

    for (char ch : s)
    {
        freq_s[ch - 'a']++;
    }

    for (char ch : t)
    {
        freq_t[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq_s[i] != freq_t[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    string s, t;

    cin >> s >> t;

    if(isAnagram(s, t))
        cout << "true";
    else
        cout << "false";

    return 0;
}