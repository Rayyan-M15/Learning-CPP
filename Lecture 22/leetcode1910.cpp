#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{
    // Continue while:
    // 1. String is not empty
    // 2. 'part' exists somewhere inside 's'
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length()); //delete the first occurence of part
    }

    return s;
}

;
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurrences(s, part) << endl;
    return 0;
}