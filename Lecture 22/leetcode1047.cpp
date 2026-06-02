#include <iostream>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";

    for (char ch : s)
    {
        if (!ans.empty() && ans.back() == ch)
        {
            ans.pop_back();
        }

        else
        {
            ans.push_back(ch);
        }
    }

    return ans;
}


int main()
{
    string s = "abbaca";

    cout << "Original String: " << s << endl;

    cout << "After Removing Adjacent Duplicates: " << removeDuplicates(s) << endl;
    return 0;
}