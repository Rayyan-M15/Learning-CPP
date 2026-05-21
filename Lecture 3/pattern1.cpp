#include <iostream>
using namespace std;
// make a square star pattern [number of rows=number of columns]. take the value of n from user.
int main()
{
    int i = 1, n, j;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        j=1;
        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
