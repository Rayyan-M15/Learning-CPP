#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user:
A A A
B B B
C C C. for n=3. */
int main()
{
    int i = 1, j, n;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}