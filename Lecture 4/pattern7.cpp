#include <iostream>
using namespace std;
/*Maek the following pattern and take the input value from the user:
1
2 2
3 3 3
4 4 4 4 ,for n=4 */
int main()
{
    int i = 1, j, n;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
