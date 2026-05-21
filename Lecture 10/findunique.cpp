/*You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.*/
#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int result=0;
    for(int i=0; i<size; i++){
        result=result^arr[i];
    }

    return result;
}

int main()
{
    int arr[5]={12,33,12,33,4};
    cout<<"The unique element in the "<<findUnique(arr, 5)<<endl;
    return 0;
}