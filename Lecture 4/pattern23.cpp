#include <iostream>
using namespace std;
/*Make the following patter. ALso take the input form the user: 
   1
  22
 333
4444 for n=4.*/
int main()
{
    int i=1, j, n;
    cout<<"Enter the value of n: ";
    cin>>n;

    while (i<=n)
    {
        j=1;

        int s = n-i;
        while (s>=0)
        {
            cout<<" ";
            s--;
        }
        
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}