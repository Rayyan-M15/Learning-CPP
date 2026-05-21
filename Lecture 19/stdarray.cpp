#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {33, 2, 12, 98, 0};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Element at second index: " << arr.at(2) << endl;

    cout << "Is the array empty: " << boolalpha << arr.empty() << endl;

    cout << "The first element of the array: " << arr.front() << endl;

    cout << "The ast element of the array: " << arr.back() << endl;

    return 0;
}