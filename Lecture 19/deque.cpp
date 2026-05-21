#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(9);  // entered from the end
    d.push_front(2); // entered from the front
    d.push_back(3);  // entered from the end
    d.push_front(8); // entered from the front
    d.push_back(5);  // entered from the end
    d.push_front(7); // entered from the front
    cout << "Deque after pushing elements: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // print the element at nth index
    cout << "Element at index 1: " << d.at(1);
    cout << endl;

    // print the element at the front
    cout << "Element at front: " << d.front();
    cout << endl;

    // print the element at the back
    cout << "Element at back: " << d.back();
    cout << endl;

    // pop from front
    cout << "Deque after poping element from front: ";
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;
    // pop from back
    cout << "Deque after poping element from back: ";
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // Checking if the deque is empty or not
    cout << "Is the deque empty?: " << d.empty() << endl;

    cout << "Erasing the first element..." << endl;
    d.erase(d.begin(), d.begin() + 1); // to erase a single element d.erase(d.begin());
    for (int i : d)
    {
        cout << i << " ";
    }
    return 0;
}