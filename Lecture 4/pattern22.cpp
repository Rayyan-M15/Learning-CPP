#include <iostream>
using namespace std;
/*Make th efollowing pattern. Also take input form user:
1111
 222
  33
   4 for n=4. */
int main()
{
    int i = 1, j, n;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        int s = i - 1;
        while (j <= n - i + 1)
        {
            while (s > 0)
            {
                cout << " ";
                s--;
            }
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}