// Write a function to calculae the nth number of the fibonacci series
#include <iostream>
using namespace std;
int fibo(int n)
{
    int num1 = 0, num2 = 1, num3;
    if (n==0)
    {
        return 0;
    }

    if (n==1)
    {
        return 1;
    }
    
    
    for (int i = 2; i < n; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return num2;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "he nth term of the fibonacci series is: " << fibo(n) << endl;
    return 0;
}