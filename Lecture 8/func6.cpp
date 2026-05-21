// Write a function to check wheter a number entered is prime or not
#include <iostream>
using namespace std;

bool IsPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
            break;
        }
        
    }
    return true;
    
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (IsPrime(n))
    {
        cout<<"The number is prime"<<endl;
    }
    else
    {
        cout<<"The number is not prime"<<endl;
    }
    
    
    return 0;
}