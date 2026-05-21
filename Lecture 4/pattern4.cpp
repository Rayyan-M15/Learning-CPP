#include <iostream>
using namespace std;
/*Print the following pattern and take the value from the user.
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1*/
int main()
{
    int i, j, n;
    cout << "Enter the vaue of n: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}