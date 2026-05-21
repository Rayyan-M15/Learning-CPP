#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user
    1
   23
  456
78910 for n=4.*/
int main()
{
    int i=1, j, n, s, v=1;

    cout<<"Enter the vlaue of n: ";
    cin>>n;

    while (i<=n)
    {
        j=1;
        s=n-i;
        while (s)
        {
            cout<<" ";
            s--;
        }

        while (j<=i)
        {
            cout<<v;
            v++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}