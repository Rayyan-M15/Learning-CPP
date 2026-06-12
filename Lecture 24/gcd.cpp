#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int ans = 1;

    for(int i = 1; i <= min(a,b); i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }

    return ans;
}


int main()
{
    int a, b;
    cout<<"Enter num1: ";
    cin>>a;
    
    cout<<"Enter num2: ";
    cin>>b;

    cout<<"The gcd of the two numbers is: "<< gcd(a, b)<<endl;
    return 0;
}