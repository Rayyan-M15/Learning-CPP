#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col) //we always need to specify the number of columns in a function involving a 2d array
//this is beacuse the compiler needs the number of columns in order to store the array in the memory.
//the array is store in a continuos block of memory using the mathematical formula
// address of arr[i][j]= base_memory + (i * no_of_columns + j)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == target){
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int arr[3][4];
    int target;

    // row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the element to search: ";
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    return 0;
}