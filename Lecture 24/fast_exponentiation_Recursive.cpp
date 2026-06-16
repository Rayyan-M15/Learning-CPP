#include <iostream>
using namespace std;

long long fastExpo(long long a, long long b)
{
    // Base Case
    if(b == 0)
    {
        return 1;
    }

    long long half = fastExpo(a, b / 2);

    if(b % 2 == 0)
    {
        return half * half;
    }
    else
    {
        return a * half * half;
    }
}

int main()
{
    long long a, b;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> b;

    cout << a << "^" << b << " = " << fastExpo(a, b) << endl;

    return 0;
}