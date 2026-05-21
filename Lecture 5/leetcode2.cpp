#include <iostream>
using namespace std;
/*Given a positive integer n, 
write a function that returns the 
number of set bits in its binary representation*/
int main()
{

    int count=0, n;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;

    return 0;
}