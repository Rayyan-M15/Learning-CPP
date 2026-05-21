#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input form the user:
1234
 234
  34
   4 for n=4.*/
int main()
{
    int i=1 , j, n, s;
    cout << "Enter te value of n: ";
    cin >> n;

    while (i<=n)
    {
        s=i-1;
        while (s!=0)
        {
            cout<<" ";
            s--;
        }
        
        j=i;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}