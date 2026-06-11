#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true); // Initially assume all numbers are prime

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        // If i is still marked prime, then it is a prime number
        if (prime[i])
        {
            count++;

            // Mark all multiples of i as non-prime
            for (int j = 2 * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}//Time Complexity = O(n log log n)

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Number of primes less than " << n << " = " << countPrimes(n) << endl;

    return 0;
}