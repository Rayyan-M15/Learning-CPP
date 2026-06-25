#include <iostream>
using namespace std;

string toLowerCase(string s)
{

    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    return s;
}

int main()
{
    string s;
    getline(cin, s);

    cout << toLowerCase(s) << endl;

    return 0;
}