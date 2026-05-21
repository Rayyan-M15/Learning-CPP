#include <iostream>
using namespace std;
/*Make the followng pattern, Also take the input from user:
1
2 1
3 2 1
4 3 2 1. for n=4*/
int main()
{
    int i = 1, j, n;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j < i)
        {
            cout << i - j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}