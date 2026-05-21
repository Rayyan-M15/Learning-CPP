#include <iostream>
using namespace std;
/*Make the following patter. Also take the inpput from user: 
A
B C
C D E
D E F G. For n=4*/
int main()
{
    int i=1, j, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            char ch = 'A' + i + j - 2;
            cout<< ch <<" ";
            ch = ch + 1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}