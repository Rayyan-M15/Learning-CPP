#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> segmentedSieve(long long L, long long R)
{
    // Step 1: Find all primes up to sqrt(R)
    long long limit = sqrt(R);

    vector<bool> prime(limit + 1, true);
    prime[0] = prime[1] = false;

    for(long long i = 2; i * i <= limit; i++)
    {
        if(prime[i])
        {
            for(long long j = i * i; j <= limit; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<long long> basePrimes;

    for(long long i = 2; i <= limit; i++)
    {
        if(prime[i])
        {
            basePrimes.push_back(i);
        }
    }

    // Step 2: Create segment [L, R]
    vector<bool> isPrime(R - L + 1, true);

    // Step 3: Mark multiples of every base prime
    for(long long p : basePrimes)
    {
        long long firstMultiple =
            max(p * p, ((L + p - 1) / p) * p);

        for(long long j = firstMultiple; j <= R; j += p)
        {
            isPrime[j - L] = false;
        }
    }

    // Handle L = 1
    if(L == 1)
    {
        isPrime[0] = false;
    }

    vector<long long> ans;

    for(long long i = L; i <= R; i++)
    {
        if(isPrime[i - L])
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    long long L = 100;
    long long R = 130;

    vector<long long> primes = segmentedSieve(L, R);

    cout << "Primes between " << L << " and " << R << ":\n";

    for(long long x : primes)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}