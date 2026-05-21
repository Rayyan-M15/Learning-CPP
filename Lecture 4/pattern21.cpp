#include <iostream>
using namespace std;
/*Make the following pattern. Take the input from user:
 * * * *
  * * *
   * *
    *        For n=4*/
int main()
{
    int i = 1, j, n, s;

    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        s = 1;
        while (s < i)
        {
            cout << " ";
            s++;
        }

        j = 1;
        while (j <= (n - i + 1))
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}