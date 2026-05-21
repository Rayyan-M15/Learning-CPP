#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, ans=0, i=0;
    cout<<"Enter the number you want the binary code of: ";
    cin>>n;

    while (n!=0)
    {
        int bit = n&1;
        ans= (bit * pow(10, i)) + ans ;
        /*this formula take the values and then puts them in the reverse order*/
        n=n>>1;// essentially divides the number by 2
               //completing the method 1 of finding the binary code of a decimal
        i++;
    }
    
    cout<<"The binary code for n is: "<< ans<<endl;
    return 0;
}

//Note: This code is only valid for the positive numbers
//in case of negative numbers we will end up running into an error.