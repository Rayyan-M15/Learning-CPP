#include <iostream>
using namespace std;
/*Make the following pattern and take the input from the user:
1
2 3
4 5 6
7 8 9 10 */
int main()
{
    int i = 1, j, n, a = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << a << " ";
            j++;
            a++;
        }
        cout << endl;
        i++;
    }

    return 0;
}