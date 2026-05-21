#include <iostream>
using namespace std;
/*Make the following pattern, also take the input from the user
1
2 3
3 4 5
4 5 6 7. Nate: MAKE THIS PATTERN WITHOUT USINF ANY EXTRA VARIABLE JUST I, J, N.*/
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
            cout<< i+j-1 <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}