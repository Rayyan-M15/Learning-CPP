#include <iostream>
using namespace std;
/* Make the following pattern, also take the input from the user
1
2 3
3 4 5
4 5 6 7 */
int main()
{
    int i = 1, j, n, a;
    cout << "Enter the value of n; ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        a = i;
        while (j <= i)
        {
            cout << a << " ";
            a++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}