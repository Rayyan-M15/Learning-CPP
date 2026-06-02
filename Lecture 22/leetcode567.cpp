#include <iostream>
using namespace std;

bool checkequal(int a[26], int b[26])
{

    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};

    if (s1.length() > s2.length())
    {
        return false;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';

        count1[index]++;
    }

    int i = 0;
    int windowsize = s1.length();
    int count2[26] = {0};

    while (i < windowsize)
    {
        int index2 = s2[i] - 'a';
        count2[index2]++;
        i++;
    }

    if (checkequal(count1, count2))
    {
        return true;
    }

    while (i < s2.length())
    {
        char newchar = s2[i];
        int index3 = newchar - 'a';
        count2[index3]++;

        char oldchar = s2[i - windowsize];
        int index4 = oldchar - 'a';
        count2[index4]--;
        i++;
        if (checkequal(count1, count2))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}