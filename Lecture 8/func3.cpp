// WAP to calculate the factorial of a number given by user.
#include <iostream>
using namespace std;

void fact(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    cout << "The factorial of " << a << " is " << f << endl;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fact(n);
    return 0;
}