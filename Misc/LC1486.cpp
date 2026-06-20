#include <iostream>
using namespace std;

int xorOperation(int n, int start)
{
    int nums[n];
    nums[0] = start;
    for (int i = 1; i < n; i++)
    {
        nums[i] = start + 2 * i;
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }

    return ans;
}

int main()
{
    int n, start;
    cin >> n >> start;

    cout << xorOperation(n, start) << endl;

    return 0;
}