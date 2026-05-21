#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, n;
    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "The sum of n numbers is: " << sum << endl;
    return 0;
}