#include <iostream>
using namespace std;
/*Make the following pattern. Also take the input from user:
A B C
A B C
A B C . For n=3*/
int main()
{
    int i, j, n;

    cout << "Enter the value of n: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}