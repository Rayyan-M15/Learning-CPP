#include <iostream>
using namespace std;
//Given an integer number n, 
//return the difference between the product of its digits 
//and the sum of its digits.
int main()
{
    int prod=1, sum=0, n;
    cin>>n;
    while(n!=0){
        int rem = n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    int ans=prod-sum;
    cout<<"The answer is: "<< ans << endl;
    return 0;
}