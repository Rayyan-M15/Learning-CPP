#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << "Value of a is " << a << endl;
    int sizea = sizeof(a);
    cout << "Size of a is " << sizea << endl << endl;

    char b = 'v';
    cout << "Value of b is " << b << endl;
    int sizeb = sizeof(b);
    cout << "Size of b is " << sizeb << endl << endl;

    bool c = true;
    cout << "value of c is " << c << endl;
    int sizec = sizeof(c);
    cout << "Size of c is " << sizec << endl << endl;

    float d = a / 10.0; 
    cout << "Value of d is " << d << endl;
    int sized = sizeof(d); 
    cout << "Size of d is " << sized << endl << endl;




    return 0;
}