#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "1.+\n2.-\n3.*\n4./\n5.%\nEnter the operatio n you want: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Error!!! Something went wrong." << endl;
        break;
    }
    return 0;
}
