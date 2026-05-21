// WAP to find the max and min value in an integral array
#include <iostream>
using namespace std;
int minarr(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        if (min > temp)
        {
            min = temp;
        }
    }

    return min;
}
int maxarr(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        if (max < temp)
        {
            max = temp;
        }
    }

    return max;
}
int main()
{
    int arr[40] = {87, -12, 45, -63, 29, -94, 7, -51, 36, -18, 72, -4, 99, -23, 60, -81, 14, -39, 56, -2, 77, 
                    -11, 33, -68, 25, -90, 6, -48, 31, -16, 70, -3, 95, -22, 57, -82, 13, -42, 65, -28};
    int n = sizeof(arr) / sizeof(int);
    cout << "The min value in the arr is: " << minarr(arr, n) << endl;
    cout << "The max value in the arr is: " << maxarr(arr, n) << endl;
    cout << "The sixe of arr is: " << n << endl;

    return 0;
}