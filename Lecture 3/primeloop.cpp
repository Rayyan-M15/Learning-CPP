#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, prime;
    cout << "Enter the number: ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Number entered is not prime" << endl;
        }

        else if (n % i != 0)
        {
            cout << "Number entered is prime" << endl;
        }
        i++;
    }

    return 0;
}