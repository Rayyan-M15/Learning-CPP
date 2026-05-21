#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
  Feasibility check:
  Given `time` for m chapters, can we partition them (contiguously, in order)
  into <= daysAllowed segments such that no segment sum exceeds maxLoad?

  Complexity: O(m)
*/
bool canAllocate(int daysAllowed, int m, const vector<long long> &time, long long maxLoad)
{
    long long daysUsed = 1; // start with the first day
    long long currentSum = 0;

    for (int i = 0; i < m; ++i)
    {
        // If a single chapter exceeds maxLoad, it's impossible.
        if (time[i] > maxLoad)
            return false;

        if (currentSum + time[i] <= maxLoad)
        {
            // add chapter to current day
            currentSum += time[i];
        }
        else
        {
            // start a new day for this chapter
            ++daysUsed;
            if (daysUsed > daysAllowed)
                return false;
            currentSum = time[i];
        }
    }
    return true;
}

/*
  Binary search on answer:
  - Lower bound (lo) = max(time)   (can't be smaller than the largest single chapter)
  - Upper bound (hi) = sum(time)   (one-day-all-chapters scenario)
  We binary-search the minimum feasible maxLoad and confirm feasibility with canAllocate.

  Complexity: O(m * log(sum(time)))
*/
long long minimizeMaxLoad(int daysAllowed, int m, const vector<long long> &time)
{
    long long lo = 0, hi = 0;
    for (int i = 0; i < m; ++i)
    {
        hi += time[i];
        lo = max(lo, time[i]);
    }

    long long ans = hi; // worst-case
    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        if (canAllocate(daysAllowed, m, time, mid))
        {
            ans = mid; // mid is feasible, try smaller
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1; // mid not feasible, need larger capacity
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example from the prompt:
    // M = 6 chapters, N = 3 days
    // times = [30, 20, 10, 40, 5, 45]
    // expected answer: 50 (one optimal partition: [30,20], [10,40], [5,45])
    {
        int N = 3; // days
        int M = 6; // chapters
        vector<long long> times = {30, 20, 10, 40, 5, 45};

        long long result = minimizeMaxLoad(N, M, times);
        cout << "Example result (expected 50): " << result << "\n";
    }

    // ----- Optional: interactive usage -----
    // Uncomment below to read custom input from stdin:
    // Input format example:
    //   first line: N M
    //   next line: M integers (time for each chapter)
    //
    // Example:
    // 3 6
    // 30 20 10 40 5 45
    //
    // Then program prints the minimal maximum load.

    /*
    int N, M;
    if (cin >> N >> M) {
        vector<long long> times(M);
        for (int i = 0; i < M; ++i) cin >> times[i];
        cout << minimizeMaxLoad(N, M, times) << "\n";
    }
    */

    return 0;
}

// code360 book allocation question
/*
#include <bits/stdc++.h>
bool IsPossible(int n, int m, const vector<int> time, int mid){
    int stdcount = 1;
    int pagesum = 0;

    for(int i = 0; i < m; i++){
        if (pagesum + time[i] < mid){
            pagesum += time[i];
        }

        else{
            stdcount++;
            if(stdcount > n || time[i]>mid){
                return false;
            }

            pagesum = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    int s = 0, sum = 0, e;

    for(int i = 0; i< m; i++){
        sum = sum + time[i];
    }

    e = sum;
    int ans = -1;

    int mid = s + (e-s)/2;
    while(s<e){
        if(IsPossible(n, m, time, mid)){
            ans = mid;
            e = mid -1;
        }

        else{
            s = mid+1;
        }
        int mid = s + (e-s)/2;
    }

    return ans;
}

*/