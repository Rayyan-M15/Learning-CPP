//Optimised code:
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    int n = 6;
    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            
        }
        if(swapped == false){
            break;
        }
        
    }

    cout<<"Sorted array is: "<<endl;
    for (int k = 0; k < n; k++)
    {
        cout<< arr[k] << " ";
    }
    cout<<endl;
    return 0;
}
