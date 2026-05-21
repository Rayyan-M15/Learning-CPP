//
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 0, 0, 1, 0};

    int n = 5;

    int left = 0, right = n - 1;
    while (left < right)
    {
        while (left < right&&arr[left] == 0)
        {
            left++;
        }
        while (left < right&&arr[right] == 1)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}