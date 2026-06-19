#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }

    return ans;
}

int commonFactors(int a, int b)
{
    int g = gcd(a, b);
    int count = 0;

    for (int i = 1; i <= g; i++)
    {
        if (g % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << commonFactors(a, b) << endl;

    return 0;
}