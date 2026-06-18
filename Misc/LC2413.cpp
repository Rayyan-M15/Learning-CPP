#include <iostream>
using namespace std;
int smallestEvenMultiple(int n)
{
    int ans;
    if (n & 1)
    {
        ans = n * 2;
    }

    else
    {
        ans = n;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << smallestEvenMultiple(n) << endl;

    return 0;
}