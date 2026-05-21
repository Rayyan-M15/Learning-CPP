#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user:
A B C
D E F
G H I. for n = 3 */
int main()
{
    int i = 1, j, n;

    cout << "Enter the value of n: ";
    cin >> n;
    char ch = 'A';

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch= ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}