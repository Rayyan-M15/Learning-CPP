//WAP to show the binary search algorithm

#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int size, int target){
    int start = 0;
    int end= size-1;

    while (start<=end)
    {
        int mid= (start+end)/2;

        if (arr[mid]==target)  
        {
            return true;
        }

        if (arr[mid]< target)
        {
            start=mid+1;;
        }

        else{
            end=mid-1;
        }
        
        
    }
    return false;
    
}

int main()
{
    int arr[10]={12, 24, 36, 48, 60, 72, 84, 96, 108, 120};
    int size= 10;
    int target= 102;

    if (BinarySearch(arr, size, target))
    {
        cout<<"The element was found"<<endl;
    }

    else{
        cout<<"The element was not found"<<endl;
    }
    
    return 0;
}