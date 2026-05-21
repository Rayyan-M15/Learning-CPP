// WAP for finding the the value of 'a' rasoed to the power of 'b'
#include <iostream>
using namespace std;

void power(int a, int b)
{
    int ans = 1, i = 1;
    while (i <= b)
    {
        ans = ans * a;
        i++;
    }
    cout << a << " raised to the power of " << b << "is equal to: " << ans << endl;
}

int main()
{
    int a, b,n;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i = 0; i <=n; i++)
    {
        power(a,b);
        a++;
        b++;
    }
    
    return 0;
}