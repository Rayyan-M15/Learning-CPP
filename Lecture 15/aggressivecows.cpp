#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlaceCows(const vector<long long> &stalls, int cows, long long minDist)
{
    int placed = 1; // place first cow at stalls[0]
    long long lastPos = stalls[0];

    for (size_t i = 1; i < stalls.size(); ++i)
    {
        if (stalls[i] - lastPos >= minDist)
        {
            ++placed;
            lastPos = stalls[i];
            if (placed == cows)
                return true;
        }
    }
    return false;
}

long long maxMinDistance(vector<long long> &stalls, int cows)
{
    sort(stalls.begin(), stalls.end());

    long long lo = 1;                              // minimal meaningful distance
    long long hi = stalls.back() - stalls.front(); // maximal possible distance
    long long ans = 0;

    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        if (canPlaceCows(stalls, cows, mid))
        {
            ans = mid; // mid is feasible — try larger
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1; // mid not feasible — reduce
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input format (standard):
    // T testcases
    // For each testcase:
    //   n (number of stalls) c (number of cows)
    //   next line: n integers (positions)
    //
    // Example:
    // 1
    // 5 3
    // 1 2 8 4 9
    //
    // Expected output for example: 3

    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        int n, c;
        cin >> n >> c;
        vector<long long> stalls(n);
        for (int i = 0; i < n; ++i)
            cin >> stalls[i];

        cout << maxMinDistance(stalls, c) << '\n';
    }
    return 0;
}
