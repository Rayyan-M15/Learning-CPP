// WAP to calculate nCr (combinations), where n and r are given by the user.
#include <iostream>
using namespace std;
float fact(float a)
{
    float f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}

float nCr(float n, float r)
{

    float ans;
    ans = (fact(n)) / ((fact(r) * fact(n - r)));
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << "The answer is: " << nCr(n, r) << endl;
    return 0;
}