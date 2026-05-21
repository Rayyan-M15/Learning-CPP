// WAP to check if the input number is even or not
#include <iostream>
using namespace std;
int IsEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    
    return 0;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (IsEven(n))
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }
    return 0;
}