//Write a function to find the nth term in an arithmetic progression (3n+7). Take input from user.
#include <iostream>
using namespace std;
int nterm(int n){
    int ans = (3*n) +7;
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The nth term of arithmetic progression is: "<<nterm(n)<<endl;
    return 0;
}