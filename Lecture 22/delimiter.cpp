#include <iostream>
using namespace std;
int main()
{
    char name[100];

    cin.getline(name, 100, '#'); //The third parameter is called the delimiter, and it can be any single character you choose.

    //the delimiter cin.getline() stops reading after it encounters the delimiter and stores what it has read so far only.

    cout<<name<<endl;
    return 0;
}