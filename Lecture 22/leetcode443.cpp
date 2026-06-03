#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0, n = chars.size();

    int ansindex = 0;

    while (i < n)
    {
        int j = i + 1;

        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansindex++] = chars[i]; // old char is stored

        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansindex++] = ch;
            }
        }
        i = j;
    }

    return ansindex;
}


int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = compress(chars);

    cout << "Compressed Array: ";

    for(int i = 0; i < newLength; i++)
    {
        cout << chars[i] << " ";
    }

    cout << endl;
    cout << "New Length: " << newLength << endl;

    return 0;
}