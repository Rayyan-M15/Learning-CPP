#include <iostream>
using namespace std;
/*make a pattern
1 1 1
2 2 2
3 3 3
uptil n. take the value of n from the user
*/
int main()
{
    int i, j, n;

    cout << "Enter the value of n: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j=1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}