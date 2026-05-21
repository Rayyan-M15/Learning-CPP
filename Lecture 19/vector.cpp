#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // original capacity = 0

    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(12);
    cout << "Capacity of v: " << v.capacity() << endl; // new capacity is = 2
    v.push_back(24);
    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(36);
    cout << "Capacity of v: " << v.capacity() << endl;
    // now the newer capacity is =4, vector doubles in size once filled

    cout << "Element at index 1 in v: " << v.at(1) << endl;
    cout << "Element at front of v: " << v.front() << endl;
    cout << "Element at back of v: " << v.back() << endl;

    vector<int> a(5, 1); // creates a vector "a" with 5 elements, all of which are intialised with the value 1.

    vector<int> copy(a); // creates a named "copy" with all the elements present in "a"

    cout << "Print a: ";
    for (int i : a)
    {
        cout << i << "";
    }
    cout << endl;
    cout << "Print copy: ";
    for (int j : copy)
    {
        cout << j << "";
    }
    cout << endl;

    // before pop

    cout << "Before Pop" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After Pop" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // before clear

    cout << "Before clear size: " << v.size() << endl;
    cout << "Before clear capacity: " << v.capacity() << endl;
    v.clear();
    cout << "After clear size: " << v.size() << endl;
    cout << "After clear capacity: " << v.capacity() << endl;

    return 0;
}