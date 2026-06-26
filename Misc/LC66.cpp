#include <iostream>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int size = digits.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }

        else
        {
            digits[i] = 0;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    int n;
    cin >> n;

    vector<int> digits(n);

    for(int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    vector<int> ans = plusOne(digits);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}