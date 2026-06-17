/*Given an array of integers arr, return true if the number of
occurrences of each value in the array is unique or false otherwise.*/
// leetcode 1207
#include <iostream>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> freq;
    int count = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }

        else
        {
            freq.push_back(count);
            count = 1;
        }
    }
    freq.push_back(count);

    sort(freq.begin(), freq.end());

    for (int i = 1; i < freq.size(); i++)
    {
        if (freq[i] == freq[i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (uniqueOccurrences(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}