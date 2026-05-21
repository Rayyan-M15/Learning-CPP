#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_front(2);
    l.push_back(15);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "After Erasing" << endl;
    for (int j : l)
    {
        cout << j << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;
    return 0;
}