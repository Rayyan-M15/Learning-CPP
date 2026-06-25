#include <iostream>
using namespace std;

bool squareIsWhite(string coordinates)
{
    int col = coordinates[0] - 'a';
    int row = coordinates[1] - '1';

    return (col + row) % 2 == 1;
}

int main()
{
    string coordinates;
    cin >> coordinates;

    if(squareIsWhite(coordinates))
        cout << "White";
    else{
        cout<<"Black";
    }
    return 0;
}
