#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, digit, ans = 0;

    cout << "Enter the binary code: ";
    cin >> n;

    while (n != 0)
    {
        digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << "The decimal value of this binary code is: " << ans << endl;

    return 0;
}