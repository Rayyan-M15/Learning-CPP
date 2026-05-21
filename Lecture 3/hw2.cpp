#include <iostream>
using namespace std;
int main()
{
    // sum of all even numbers from 1 - n

    int i = 2, sum = 0, n;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }
    cout << "The sum of all even numbers upto n are: " << sum << endl;

    return 0;
}