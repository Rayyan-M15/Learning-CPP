//reverse the array: code360

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr;

    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(65);
    arr.push_back(33);
    arr.push_back(9);
    arr.push_back(34);

    int s = 0, e = arr.size() - 1;

    cout<<"Original array: "<<endl;
    for (int i : arr)
    {
        cout<< i <<" ";
    }cout<<endl;

    while (e>s)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }


    cout<<"Reversed array: "<<endl;
    for (int i : arr)
    {
        cout<< i <<" ";
    }cout<<endl;
    

    return 0;
}