#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user: 
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1 for n=5.*/
int main()
{
    int i=1, j, n, s, k, f;

    cout<<"Enter the value of n: ";
    cin>>n;

    while (i<=n)
    {
        //print triangle 1 with numbers
        j=i;
        while (j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        
        //print triangle 2 with stars
        s=1;
        while (s<i)
        {
            cout<<"*"<<" ";
            s++;
        }
        
        //print triangle 3 with stars
        k=1;
        while (k<i)
        {
            cout<<"*"<<" ";
            k++;
        }
        
        //print triangle 4 with numbers
        f=i;
        while (f<=n && f>0)
        {
            cout<<f<<" ";
            f++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}