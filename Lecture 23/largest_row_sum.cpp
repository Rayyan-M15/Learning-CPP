#include <iostream>
using namespace std;
//wap to find the largest row sum in the input
int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sumarr[3];
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }

        sumarr[i] = sum;
    }

    int largest = sumarr[0];
    int rownum;
    for (int i = 0; i < 3; i++)
    {
        if (largest<sumarr[i])
        {
            largest=sumarr[i];
            rownum = i+1;
        }
        
    }

    cout<< "largest row sum is: "<< largest <<endl;
    cout<< "And the row number is: "<< rownum <<endl;
    
    return 0;
}