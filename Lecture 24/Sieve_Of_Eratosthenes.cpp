#include <iostream>
#include <vector>
using namespace std;

void sieve(int n)
{
    vector<bool> prime(n + 1, true);

    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    cout << "Prime numbers from 1 to " << n << ":\n";

    for(int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    sieve(n);

    return 0;
}