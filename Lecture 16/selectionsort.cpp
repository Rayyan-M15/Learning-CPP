#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {23, 43, 12, 10, 0};

    for (int i = 0; i < 5; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        swap(arr[i], arr[minindex]);
    }

    // printing the array
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }

    cout << endl
         << endl;
    return 0;
}