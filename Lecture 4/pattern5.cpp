#include <iostream>
using namespace std;
/*Make the following pattern . Take the input form the user
1 2 3
4 5 6
7 8 9   */
int main()
{
    int i = 1, j, n, c = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= 3 && c <= n)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}