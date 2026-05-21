#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ('a' <= ch && ch <= 'z')
    {
        cout << "it is lowercase" << endl;
    }

    else if ('A' <= ch && 'Z' >= ch)
    {
        cout << "It is uppercase" << endl;
    }

    else if ('0' <= ch && ch <= '9')
    {
        cout << "It is a digit" << endl;
    }

    else
    {
        cout << "Error" << endl;
    }
    return 0;
}