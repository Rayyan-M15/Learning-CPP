#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <numeric>
#include <cmath>
#include <climits>
using namespace std;

int minimumSum(int num)
{
    vector<int> arr;

    for (int i = 0; i < 4; i++)
    {
        int digit = num % 10;
        arr.push_back(digit);

        num /= 10;
    }

    sort(arr.begin(), arr.end());

    int new1 = arr[0] * 10 + arr[2];
    int new2 = arr[1] * 10 + arr[3];

    return new1 + new2;
}

int main()
{
    int num;
    cin >> num;

    cout << minimumSum(num) << endl;

    return 0;
}