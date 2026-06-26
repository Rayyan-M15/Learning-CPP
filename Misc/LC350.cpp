#include <iostream>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);

                nums2.erase(nums2.begin() + j);
                break;
            }
        }
    }

    return ans;
}

int main()
{
    int n1, n2;
    cin >> n1;

    vector<int> nums1(n1);
    for(int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }

    cin >> n2;

    vector<int> nums2(n2);
    for(int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    vector<int> ans = intersect(nums1, nums2);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
