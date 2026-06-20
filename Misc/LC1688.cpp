#include <iostream>
using namespace std;

int numberOfMatches(int n)
{
    return n - 1;
}

int main()
{
    int n;
    cin >> n;

    cout << numberOfMatches(n) << endl;

    return 0;
}