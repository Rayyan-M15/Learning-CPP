#include <iostream>
using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int diff = arr[1] - arr[0];

    for (int i = 2; i < arr.size(); i++)
    { // as the first two element are verified in diff we
      // start with i=2
        if (arr[i] - arr[i - 1] != diff)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> arr = {3, 5, 1};

    if (canMakeArithmeticProgression(arr))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}