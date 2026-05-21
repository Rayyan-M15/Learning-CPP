#include <iostream>
using namespace std;
/*Make the following pattern. Also take input from user:
    *
   **
  ***
 **** For n=4 */
int main()
{
    int i, j, n,s;
    cout << "Enter the value of n: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        s = n - i;
        while (s!=0)
        {
            cout<<" ";
            s--;
        }
        
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}