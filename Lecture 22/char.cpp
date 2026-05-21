#include <iostream>
using namespace std;

int getlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverseString(char s[])
{
    int st = 0, e = getlength(s) - 1;
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
}

bool isPalindrome(string s)
{

    int st = 0, e = s.length() - 1;

    while (st < e)
    {
        if (s[st] != s[e])
        {
            return false;
        }
        st++;
        e--;
    }

    return true;
}

int main()
{
    char ch[10] = {'r', 'a', 'y', 'y', 'a', 'n','\0', 'c', 'o'};
    char name[10];
    cout << "Enter a word; ";
    cin >> name;

    cout<<endl<<ch<<endl;

    cout << name << endl;
    cout << "Size of word: " << getlength(name) << endl;
    reverseString(name);
    cout << "Reversed word is: " << name << endl;

    return 0;
}