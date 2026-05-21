#include <iostream>
using namespace std;
/*Make the following pattern and take the input value from the user:
 *
 * *
 * * *
 * * * * , for n=4 */
int main()
{
    int n, i = 1, j;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}