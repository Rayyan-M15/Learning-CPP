#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, ans=0, i=0, k=0;
    cout<<"Enter the number you want the binary code of: ";
    cin>>n;

    if (n<0)
    {
        n = n*(-1);
        k=1;
    }
    
    while (n!=0)
    {
        int bit = n&1;
        ans= (bit * pow(10, i)) + ans ;
        /*this formula take the values and then puts them in the reverse order*/
        n=n>>1;// essentially divides the number by 2
               //completing the method 1 of finding the binary code of a decimal
        i++;
    }
    if (k==0)
    {
        cout<<"The binary code for n is: "<< ans<<endl;
    }
    else if (k==1)
    {
        cout<<"The binary code for n is: -"<< ans<<endl;
    }
    
    return 0;
}

/*Note: This code is only valid for the positive numbers,
but for the negative numbers it simply puts a negative sign. 
This is the mathematical approach. The 5=101 so -5 = -101 */