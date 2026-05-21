#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
  Feasibility check:
  Can we assign the boards (in order, contiguous) to <= painters such that
  no painter paints more than maxLoad units (length sum)?
*/
bool canPaint(const vector<long long> &lengths, int paintersAllowed, long long maxLoad)
{
    long long paintersUsed = 1;
    long long currentSum = 0;
    for (long long len : lengths)
    {
        if (len > maxLoad)
            return false; // single board exceeds capacity
        if (currentSum + len <= maxLoad)
        {
            currentSum += len;
        }
        else
        {
            ++paintersUsed;
            if (paintersUsed > paintersAllowed)
                return false;
            currentSum = len;
        }
    }
    return true;
}

/*
  Binary-search driver:
  lower bound = max(lengths)
  upper bound = sum(lengths)
  returns minimal maximum-length any painter must handle.
*/
long long painterPartitionMinLoad(const vector<long long> &lengths, int painters)
{
    long long lo = 0, hi = 0;
    for (long long x : lengths)
    {
        hi += x;
        lo = max(lo, x);
    }

    long long ans = hi;
    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        if (canPaint(lengths, painters, mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Interactive / contest-friendly input:
    // First line: n k timePerUnit
    // Next line: n integers (lengths)
    //
    // Example:
    // 6 3 1
    // 30 20 10 40 5 45
    //
    // Output: 50  (when timePerUnit = 1)
    //
    int n, k;
    long long timePerUnit;
    if (!(cin >> n >> k >> timePerUnit))
    {
        // If input not provided, run a built-in example and exit.
        vector<long long> example = {30, 20, 10, 40, 5, 45};
        int painters = 3;
        long long minLoad = painterPartitionMinLoad(example, painters);
        cout << (minLoad * 1) << '\n';
        return 0;
    }

    vector<long long> lengths(n);
    for (int i = 0; i < n; ++i)
        cin >> lengths[i];

    long long minLoadUnits = painterPartitionMinLoad(lengths, k);
    long long resultTime = minLoadUnits * timePerUnit;

    cout << resultTime << '\n';
    return 0;
}
