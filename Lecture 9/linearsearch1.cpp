//WAP to linearly search for an element in an array
#include <iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    int arr[10]={37, -24, 0, 58, -13, 92, 7, -49, 16, 81};
    int size= 10;
    int key=16;

    if (search(arr, size, key))
    {
        cout<<"The key is present is the array"<<endl;
    }else{
        cout<<"The is not present in the array"<<endl;
    }
    
    return 0;
}