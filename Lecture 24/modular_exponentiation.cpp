#include <iostream>
using namespace std;

int modularExponentiation(long long int x, int n, int m)
{
    long long int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = ((res) * (x % m)) % m;
        }

        x = (x % m) * (x % m);

        n = n >> 1;
    }

    return res;
}
int main()
{
    long long int x;
    int n, m;

    cout << "Enter x, n and m: ";
    cin >> x >> n >> m;

    cout << "Result = "
         << modularExponentiation(x, n, m)
         << endl;

    return 0;
}