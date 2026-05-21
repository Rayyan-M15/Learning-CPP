#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user:
A
B B
C C C. For n=3 */
int main()
{
    int i, j, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char ch='A' ;
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<< ch <<" ";
            j++;
        }
        ch = ch + 1;
        cout<<endl;
        i++;
    }
    
    return 0;
}