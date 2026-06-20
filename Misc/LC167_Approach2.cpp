#include <iostream>
using namespace std;
// two pointer approach
vector<int> twoSum(vector<int> &numbers, int target)
{
    int size = numbers.size();
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int sum = numbers[left] + numbers[right];

        if (sum == target)
        {
            return {left + 1, right + 1};
        }

        else if (sum < target)
        {
            left++;
        }

        else
        {
            right--;
        }
    }
    return {};
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> numbers(n);

    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cin >> target;

    vector<int> ans = twoSum(numbers, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}