#include <iostream>
using namespace std;
bool isprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if(isprime(num)){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is not prime"<<endl;

    }

    return 0;
}