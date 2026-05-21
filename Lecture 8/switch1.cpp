#include <iostream>
using namespace std;
int main()
{
    int num = 2;

    switch (num)
    {
    case 1:
        cout << "Number is 1" << endl;
        break;

    case 2:
        cout << "Number is 2" << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    return 0;
}