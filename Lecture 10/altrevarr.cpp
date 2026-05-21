// WAP to swap the alternative elements of an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 8, 0, 4, 2};
    int size= sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]= temp;
        }
        
    }
    cout<<"The alternatively reversed array is: ";
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    
    return 0;
}