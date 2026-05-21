//Write a function to calculate the total number of set bits in a and b, take input from user
#include <iostream>
using namespace std;
int setbit(int n){
    int count = 0;
    while (n>0)
    {
        if (n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
    
}
int main()
{
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"The total set bits in a and b are: "<<setbit(a)+setbit(b)<<endl;
    return 0;
}