#include <iostream>
using namespace std;
/*Make the following pattern. Also take input from the user:
D
C D
B C D
A B C D. For n=4 */
int main()
{
    int i = 1, j, n;

    cout << "Enter the vlue of n: ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        char ch = 'A' + n - i  ;
        while (j <= i)
        {
            // char ch = 'A' + n - i + j - 1 ;  This is also a working but complicated formula
            cout << ch << " ";
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}