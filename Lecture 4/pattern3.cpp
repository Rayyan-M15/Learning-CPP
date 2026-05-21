#include <iostream>
using namespace std;
/*make the following pattern and take the value of n from user
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
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
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}