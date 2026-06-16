#include <iostream>
using namespace std;

long long fastExpo(long long a, long long b)
{
    long long ans = 1;

    while(b > 0)
    {
        // If b is odd
        if(b & 1)
        {
            ans = ans * a;
        }

        a = a * a;
        b = b >> 1;   // same as b = b/2
    }

    return ans;
}

int main()
{
    long long a, b;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> b;

    cout << a << "^" << b << " = " << fastExpo(a, b);

    return 0;
}