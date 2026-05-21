#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;

    s.push("Rayyan");
    s.push("Rasool");
    s.push("Mir");
    s.push("Jamia");

    cout << "The element present on top is: " << s.top() << endl;
    cout << "Size of stack is: " << s.size() << endl;

    cout << "Popping an element in stack(popped from the top)" << endl;

    s.pop();

    cout << "Now the new top element is: " << s.top() << endl;

    cout << "New size of stack is: " << s.size() << endl;

    cout << "Is the stack empty: " << boolalpha << s.empty() << endl; // boolalpha converts 0->false and 1->true

    return 0;
}