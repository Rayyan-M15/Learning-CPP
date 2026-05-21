#include <iostream>
using namespace std;
/*Make the following pattern. Also tae the input from the user:
A
B C
D E F
G H I J. for n=4.*/
int main()
{
    int i, j, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char ch='A';
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<< ch <<" ";
            ch = ch+1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}