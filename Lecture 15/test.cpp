bool isPossible(vector arr, int n, int m, int mid)
{
    int studentCount = 1;
    long long pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (pageSum + arr[i] > mid)
        {
            studentCount++;
            pageSum = arr[i];
            if (studentCount > m)
            {
                return false;
            }
        }
        else
        {
            pageSum += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector arr, int n, int m)
{
    if (m > n)
    {  
        return -1;
    }

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;

    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

// code2

#include <bits/stdc++.h>

bool isPossible(vector<int> &arr, int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }

        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }

            pagesum = arr[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> arr)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;

    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}