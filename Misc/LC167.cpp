#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int size = numbers.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                return {i + 1, j + 1};
            }
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