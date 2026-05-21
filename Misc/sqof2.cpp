//WAP to see if the entered number can be represented in the for of 2^x completely using the set bit method.
//Logic: a number that can be represented in this form will hav eexactly one set bit, range= 2^0 to 2^30.
#include <iostream>
using namespace std;
bool check(int n){
    if (n<0)
    {
        return false;
    }

    int count=0;
    while (n>0)
    {
        if (n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (check(n))
    {
        cout<<"The number can be represented in 2^x"<<endl;
    }else {
        cout<<"The number can not be represented in 2^x"<<endl;
    }
    

    return 0;
}