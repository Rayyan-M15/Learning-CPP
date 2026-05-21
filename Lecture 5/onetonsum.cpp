#include <iostream>
using namespace std;
// Give the sum of all numbers upto n. Take the value of n from user.
int main()
{
    int i, n;

    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of all the numbers upto " << n << " is: " << sum << endl;

    return 0;
}