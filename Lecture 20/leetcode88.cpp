// Leetcode 88: Merge Sorted Array

#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0; i < n; i++)
    {
        nums1[m + i] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());
}

int main()
{
    vector<int> nums1 = {1,3,5,7,9};
    vector<int> nums2 = {2,4,6};

    int m = 5;
    int n = 3;

    merge(nums1, m, nums2, n);

    for(int i:nums1){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}