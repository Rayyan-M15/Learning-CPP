// we need to use Sieve of Eratosthenes for this problem, the usual code below wont work due to time comlexity issues:
#include <iostream>
using namespace std;
bool isprime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Number of primes less than " << n << " = "<< countPrimes(n) << endl;   //here the time complexity of the code is O(n^2)
    return 0;
}