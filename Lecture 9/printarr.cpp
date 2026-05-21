#include <iostream>
using namespace std;
//WAP to print an interger array.
void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[10]={2,7},n;
    n=sizeof(arr)/sizeof(int);
    printarr(arr, n);

    cout<<endl<<"The total space in array: "<<n<<endl;
    return 0;
}