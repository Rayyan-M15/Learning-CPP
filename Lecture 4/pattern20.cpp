#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user:
* * * *
* * *
* *
*    for n=4 */
int main()
{
    int i=1, j, n, s;

    cout<<"Enter the value of n: ";
    cin>>n;

    while (i<=n)
    {
        j=n;
        while (j>=i)
        {
            cout<<"* ";
            j--;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}