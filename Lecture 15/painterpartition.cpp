#include <iostream>
using namespace std;

int findLargestMinDistance(vector<int> &boards, int k)
{
    int low = boards[0];
    int high = 0;
    int size = boards.size();

    // calculating low = max in arr, high = sum of all arr elements
    for (int i = 0; i < size; i++)
    {
        if (boards[i] > low)
        {
            low = boards[i];
        }

        high += boards[i];
    }

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int paintercount = 1;
        int currentboards = 0;

        // same as book allocation
        for (int j = 0; j < size; j++)
        {
            if (currentboards + boards[j] <= mid)
            {
                currentboards += boards[j];
            }

            else
            {
                paintercount++;
                currentboards = boards[j];
            }
        }

        // checking if the soln is possible
        if (paintercount <= k)
        {
            ans = mid;
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> boards = {10, 20, 30, 40};

    int k = 2; // Number of painters

    cout << findLargestMinDistance(boards, k) << endl;

    return 0;
    return 0;
}