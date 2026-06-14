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

    while (a!=b)
    {
        if (a>b)
        {
            a = a-b;
        }

        else{
            b = b-a;
        }
        
    }
    
    return a;
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
