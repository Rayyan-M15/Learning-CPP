//print the sum of all elements in an array.
#include <iostream>
using namespace std;
int arrsum(int arr[], int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans+=arr[i];
    }
    return ans;
}
int main()
{
    int arr[10]={23, -11, 45, 7, -32, 89, 0, -56, 14, 62};
    cout<<"The sum of all the elemnts of an array is:"<< arrsum(arr, 10)<< endl;
    return 0;
}