#include <iostream>
using namespace std;

int myAtoi(string s)
{
    int i = 0;
    int n = s.size();
    int sign = 1;
    long long int ans = 0;

    while (i < n && s[i] == ' ')
    {
        i++;
    }

    if (i < n && s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (i < n && s[i] == '+')
    {
        sign = 1;
        i++;
    }

    while (i < n && s[i] == '0')
    {
        i++;
    }

    while (i < n && ('0' <= s[i] && s[i] <= '9'))
    {
        int digit = s[i] - '0';
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        ans = ans * 10 + digit;
        i++;
    }

    return sign * ans;
}

int main()
{
    string s;
    getline(cin, s);

    cout << myAtoi(s) << endl;

    return 0;
}