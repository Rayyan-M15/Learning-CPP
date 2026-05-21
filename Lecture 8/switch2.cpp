#include <iostream>
using namespace std;
int main()
{
    char ch = '1';

    switch (ch)
    {
    case 1:
        cout<<"Integer"<<endl;
        break;
    
    case '1':
        cout<<"Character"<<endl;
        break;
    default:
        cout<<"Error"<<endl;
        break;
    }
    return 0;
}