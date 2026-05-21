#include <iostream>
using namespace std;
/* Make the following pattern. Also take input from user:
   1
  121
 12321
1234321 for n=4 */
int main()
{
    int i=1, j, n, s, k;
    
    cout<<"Enter the value of n: ";
    cin>>n;
    while (i<=n)
    {
        
        
        //printing the spaces
        s=n-i;
        while (s>0)
        {
            cout<<" ";
            s--;
        }
        
        //printing the first triangle
        j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }

        //printing the third triangle
        k=i-1;
        while (k>0)
        {
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
        
    }
    
    return 0;
}