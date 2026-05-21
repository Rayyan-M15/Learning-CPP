#include <iostream>
using namespace std;
int main()
{
    int a = 'a';
    cout << a << endl;
    /*here, the character 'a is type casted into an integer with the ascii table value'*/

    char ch = 98;
    cout << ch << endl;
    /*here, the integral value of 98 is converted into the charectoral value of of ascii table which is 'b'*/

    char ch2 = 123456;
    cout<< ch2<<endl;
    /* here, at the entire integral value of ch2 can't fit into char, 
    we will be taking the last byte which is equal to 64 after binary conversion
    and then convert its value in to its corresponding value in the ascii table */

    return 0;
}