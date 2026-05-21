//WAP to reverse an array
#include <iostream>
using namespace std;
void revarr(int arr[], int size){
    int start=0, end=size-1;
    while (start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];        //All this can be done simply by using swap(arr[start],arr[end]);
        arr[end]= temp;
        start++;
        end--;
    }
    
}
int main()
{
    int arr[10]={37, -24, 0, 58, -13, 92, 7, -49, 16, 81};
    int size=10;

    cout<<"Original array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    revarr(arr, size);
    
    cout<<"Reverse array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    revarr(arr, size);
    cout<<"Re-reversed array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}