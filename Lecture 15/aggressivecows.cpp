#include <iostream>
using namespace std;

bool Possible(vector<int> &stalls, int k, int mid)
{

    int cowcount = 1;
    int lastpos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {

        if (stalls[i] - lastpos >= mid)
        {
            cowcount++;

            if (cowcount == k)
            {
                return true;
            }

            lastpos = stalls[i];
        }
    }

    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int st = 0;
    int e = stalls[0];
    int size = stalls.size();

    for (int i = 0; i < size; i++)
    {
        if (e <= stalls[i])
        {
            e = stalls[i];
        }
    }

    int ans;
    while (st <= e)
    {
        int mid = st + (e - st) / 2;

        if (Possible(stalls, k, mid))
        {
            ans = mid;
            st = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};

    int k = 3; // Number of cows

    cout << aggressiveCows(stalls, k) << endl;

    return 0;

    return 0;
}