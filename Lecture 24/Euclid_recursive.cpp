#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    if (a == b)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(a - b, b);
    }

    return gcd(a, b - a);
}

int main()
{
    int a, b;
    cout << "Enter num1: ";
    cin >> a;

    cout << "Enter num2: ";
    cin >> b;

    cout << "The gcd of the two numbers is: " << gcd(a, b) << endl;
    return 0;
}
