#include <iostream>
using namespace std;
// Take a number from user and check if it is prime or not.
int main()
{
    int n, c = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c = 0;
            break;
        }
    }

    if (c == 0)
    {
        cout << "The number is not prime" << endl;
    }

    else
    {
        cout << "The number is prime" << endl;
    }

    return 0;
}