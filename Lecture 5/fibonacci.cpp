#include <iostream>
using namespace std;
// WAP to print the fibonacci series upto n terms.
// Take the value of n from user.
int main()
{
    int i, n, term1 = 0, term2 = 1, newterm;

    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cout << term1 << " ";
        newterm = term1 + term2;
        term1 = term2;
        term2 = newterm;
    }
    cout << endl;

    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
    int n, term1 = 0, term2 = 1, newterm;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << term1 << " " << term2 << " "; or cout<<"0 1 ";

    for (int i = 1; i <= n-2; i++)
    {
        newterm = term1 + term2;
        cout << newterm << " ";
        term1 = term2;
        term2 = newterm;
    }

    return 0;
}

*/